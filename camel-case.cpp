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
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string" -> "camelCase exampleTestString".
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
    getline(cin, s);
    vector<string> v;
    string word;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            v.push_back(word);
            word = "";
        } else if(s[i] == '-') {
            v.push_back(word);
            word = "";
            string newWord;
            newWord += s[i];
            v.push_back(newWord);
        } else {
            word += s[i];
        }
    }
    v.push_back(word);
    for(int i = 0; i < v.size(); i++) {
        if(v[i].size() == 1) {
            if(i == 0) {
                v[i+1][0] = toupper(v[i+1][0]);
            } else {
                v[i+1][0] = toupper(v[i+1][0]);
                if(i-2 >= 0) {
                    v[i-2] += v[i+1];
                    v[i+1] = "";
                }
            }
        }
    }
    for(int i = 0; i < v.size(); i++) {
        if(v[i].size() > 0) {
            cout << v[i];
        }
    }
    return 0;
}
