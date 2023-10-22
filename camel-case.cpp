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
    string s;
    getline(cin, s);
    bool first = true;
    string word;
    while (s.length() > 0) {
        if (s[0] == '-') {
            if (first) {
                word[0] = toupper(word[0]);
            }
            cout << word;
            s = s.substr(1, s.length()-1);
            word = "";
            first = false;
        } else if (s[0] == ' ') {
            cout << word << " ";
            s = s.substr(1, s.length()-1);
            word = "";
            first = true;
        } else {
            word += s[0];
            s = s.substr(1, s.length()-1);
        }
    }
    if (first) {
        word[0] = toupper(word[0]);
    }
    cout << word << endl;
    return 0;
}
