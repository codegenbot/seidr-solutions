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
Write a function that takes a string in kebab-case and converts all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space.
For example: "camel-case example-test-string" -> "camelCase exampleTestString".
Examples
Input Output
str:
"camel-case example-test-string"
"camelCase exampleTestString"
str:
"nospaceordash"
"nospaceordash"
str:
"two-words"
"twoWords"
str:
"two words"
"two words"
str:
"all separate words"
"all separate words"
*/
int main() {
    string s;
    getline(cin, s);
    string result = "";
    bool flag = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i] == '-') {
            flag = false;
            result += s[i];
        } else {
            if (flag == false) {
                result += toupper(s[i]);
                flag = true;
            } else {
                result += s[i];
            }
        }
    }
    cout << result << endl;
    return 0;
}
