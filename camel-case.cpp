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
    while (getline(cin, s)) {
        string result = "";
        bool isSpace = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                isSpace = true;
                result += s[i];
            } else if (s[i] == '-') {
                isSpace = false;
            } else {
                if (isSpace) {
                    result += s[i];
                } else {
                    result += toupper(s[i]);
                }
            }
        }
        cout << result << endl;
    }
}
