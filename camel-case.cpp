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
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string" -> "camelCaseExampleTestString".
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
bool isUpper(char c) {
    return c >= 'A' && c <= 'Z';
}
bool isLower(char c) {
    return c >= 'a' && c <= 'z';
}
int main() {
    string s;
    getline(cin, s);
    string result = "";
    bool flag = false;
    bool isDash = false;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (isUpper(c)) {
            if (isDash) {
                result += '-';
                isDash = false;
            }
            flag = false;
            result += tolower(c);
        } else if (isLower(c)) {
            if (flag == false) {
                if (isDash) {
                    result += '-';
                    isDash = false;
                }
                result += toupper(c);
                flag = true;
            } else {
                result += c;
            }
        } else if (c == ' ' || c == '-') {
            if (isDash) {
                result += '-';
                isDash = false;
            }
            flag = false;
            isDash = true;
        } else {
            result += c;
        }
    }
    cout << result << endl;
    return 0;
}
