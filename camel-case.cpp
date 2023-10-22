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
    while(getline(cin, s)) {
        string ans = "";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ' || s[i] == '-') {
                ans += s[i];
                continue;
            }
            if(s[i] >= 'A' && s[i] <= 'Z') {
                ans += s[i];
            } else {
                if(i > 0 && s[i-1] == ' ') {
                    ans += s[i] - 'a' + 'A';
                } else {
                    ans += s[i];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
