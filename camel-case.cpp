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
    string res = "";
    bool flag = false;
    getline(cin, str);
    bool space = false;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == ' ' || (str[i] == '-' && i+1 < str.size() && str[i+1] != ' ')) {
            res += str[i];
            flag = true;
            space = true;
        } else if(str[i] == '-') {
            if(i-1>=0 && str[i-1] != ' ') {
                res += ' ';
            }
            continue;
        }
        if(flag) {
            res += toupper(str[i]);
            flag = false;
            space = false;
        } else {
            res += str[i];
        }
    }
    cout << res << endl;
    return 0;
}
/*
tradition is an invention of the twentieth century
Tradition is an invention of the twentieth century
tradi tion is an invention of the twentieth century
*/
