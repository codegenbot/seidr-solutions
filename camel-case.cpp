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
// second solution
int main() {
    string s;
    getline(cin, s);
    vector<string> v;
    int i = 0;
    string t;
    for (char c : s) {
        if (c == ' ' || c == '-') {
            v.push_back(t);
            t = "";
        } else {
            t += c;
        }
    }
    if (t != "") {
        v.push_back(t);
    }
    for (int i = 0; i < v.size(); i++) {
        if (i == 0) {
            cout << v[i];
            continue;
        }
        cout << v[i].substr(0,1);
        for (int j = 1; j < v[i].length(); j++) {
            if (v[i][j] >= 'a' && v[i][j] <= 'z') {
                cout << v[i][j];
            }
        }
    }
    return 0;
}
// first solution
int main() {
    string s;
    getline(cin, s);
    vector<string> v;
    int i = 0;
    string t;
    for (char c : s) {
        if (c == ' ' || c == '-') {
            v.push_back(t);
            t = "";
        } else {
            t += c;
        }
    }
    if (t != "") {
        v.push_back(t);
    }
    for (int i = 0; i < v.size(); i++) {
        if (i == 0) {
            cout << v[i];
            continue;
        }
        v[i][0] += 'A' - 'a';
        cout << v[i];
    }
    return 0;
}
