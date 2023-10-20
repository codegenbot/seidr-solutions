#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString".
For example,
input:

output:

input:
nospaceordash
output:
nospaceordash
input:
two-words
output:
twoWords
input:
two words
output:
two words
input:
all separate words
output:
all separate words
*/
int main() {
    string input;
    getline(cin, input);
    stringstream ss(input);
    string word;
    while (ss >> word) {
        if (word.find("-") != string::npos) {
            int pos = word.find("-");
            word[pos + 1] = toupper(word[pos + 1]);
            word.erase(pos, 1);
        }
        cout << word << " ";
    }
    return 0;
}
