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
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string token;
        int x = 0;
        int y = 0;
        while(getline(ss, token, ' ')) {
            string s = token;
            for (int j = 0; j < s.size(); j++) {
                if (s[j] == '-') {
                    x++;
                }
            }
            if (x == 0) {
                cout << s;
                break;
            }
            y = 0;
            for (int k = 0; k < s.size(); k++) {
                if (y == 0 && s[k] != '-') {
                    s[k] = toupper(s[k]);
                    y++;
                }
                if (s[k] == '-') {
                    s[k] = ' ';
                    s[k+1] = toupper(s[k+1]);
                }
            }
            cout << s << " ";
        }
    }
    return 0;
}
