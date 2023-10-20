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
input:
a-b-c
output:
aBC
input:
a-b-c-
output:
aBC
input:
a-b-c-d-e-f-g-h-i-j-k-l-m-n-o-p-q-r-s-t-u-v-w-x-y-z-
output:
aBCDEFGHIJKLMNOPQRSTUVWXYZ
*/
int main() {
    string s;
    getline(cin, s);
    string r;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == '-') {
            i++;
            r += toupper(s[i]);
            i++;
        }
        else {
            r += s[i];
            i++;
        }
    }
    cout << r << endl;
}
