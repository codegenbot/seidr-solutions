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
    while (getline(cin,s)) {
        string ans = "";
        int n = s.length();
        for (int i = 0; i < n; ++i) {
            if (s[i] == ' ' || s[i] == '-') {
                ans += s[i];
                continue;
            }
            if (i > 0 && s[i - 1] == ' ') {
                ans += s[i];
                continue;
            }
            if (i > 0 && s[i - 1] == '-') {
                ans += s[i];
                continue;
            }
            if (i + 1 < n && s[i + 1] == ' ') {
                ans += s[i];
                continue;
            }
            if (i + 1 < n && s[i + 1] == '-') {
                ans += s[i];
                continue;
            }
            if (s[i] >= 'a' && s[i] <= 'z') {
                ans += s[i];
                continue;
            }
            if (s[i] >= 'A' && s[i] <= 'Z') {
                if (i > 0 && s[i - 1] != ' ' && s[i - 1] != '-') {
                    ans += s[i] + 32;
                } else {
                    ans += s[i];
                }
                continue;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
