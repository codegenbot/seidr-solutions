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
string toCamelCase(string s) {
    string ans = "";
    bool first = true;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ' || s[i] == '-') {
            first = true;
            continue;
        }
        if(first) {
            ans += toupper(s[i]);
            first = false;
        } else {
            ans += s[i];
        }
    }
    return ans;
}

int main() {
    string s;
    getline(cin, s);
    cout << toCamelCase(s) << endl;
}
