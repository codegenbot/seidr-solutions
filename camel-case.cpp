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
    string str;
    getline(cin, str);
    string res = "";
    string temp = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            res += temp;
            res += ' ';
            temp = "";
        } else if (str[i] == '-') {
            if (temp.size() > 0) {
                temp[0] = toupper(temp[0]);
                res += temp;
                res += ' ';
                temp = "";
            }
        } else {
            temp += str[i];
        }
    }
    if (temp.size() > 0) {
        temp[0] = toupper(temp[0]);
        res += temp;
    }
    cout << res << endl;
    return 0;
}
