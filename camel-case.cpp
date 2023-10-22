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
    string res = "";
    bool space = false;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') space = true;
        else if(s[i] == '-') continue;
        else if(space) {
            res += toupper(s[i]);
            space = false;
        } else res += s[i];
    }
    return res;
}
int main() {
    string s;
    while(getline(cin, s)) {
        cout << toCamelCase(s) << endl;
    }
}
