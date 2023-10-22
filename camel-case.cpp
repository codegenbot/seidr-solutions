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
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);
        string res;
        int n = s.size();
        for (int j = 0; j < n; j++) {
            if (s[j] == ' ' || s[j] == '-') {
                for (int k = j+1; k < n; k++) {
                    if (s[k] == ' ' || s[k] == '-') break;
                    if (s[k] >= 'a' && s[k] <= 'z')
                        s[k] = s[k] - 32;
                }
            }
            res += s[j];
        }
        cout << res << endl;
    }
    return 0;
}
