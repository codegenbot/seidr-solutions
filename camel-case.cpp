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
    getline(cin, input); //read one line of input
    //cout << input << endl;
    string result = "";
    bool firstLetter = false;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '-') {
            firstLetter = true;
            continue;
        }
        else if (firstLetter) {
            if (input[i] >= 'a' && input[i] <= 'z') {
                result += (input[i] - 32);
                firstLetter = false;
            }
            else {
                result += input[i];
                firstLetter = false;
            }
        }
        else {
            result += input[i];
        }
    }
    cout << result << endl;
    
    return 0;
}
