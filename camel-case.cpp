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
string convert(string line) {
    string res = "";
    bool is_first = true;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == '-') {
            is_first = true;
            continue;
        }
        if (is_first) {
            res += toupper(line[i]);
            is_first = false;
        } else {
            res += line[i];
        }
    }
    return res;
}
int main() {
    string line;
    getline(cin, line);
    string res = "";
    bool is_first = true;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == '-') {
            is_first = true;
            continue;
        }
        if (is_first) {
            res += toupper(line[i]);
            is_first = false;
        } else {
            res += line[i];
        }
    }
    cout << res << endl;
    return 0;
}
