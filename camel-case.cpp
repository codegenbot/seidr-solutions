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
    string str;
    getline(cin, str);
    stringstream ss(str);
    string word;
    int dash = 0;
    while (getline(ss, word, ' ')) {
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == '-') {
                dash = 1;
            }
        }
        if (dash == 0) {
            cout << word << " ";
        } else {
            stringstream sss(word);
            string wd;
            while (getline(sss, wd, '-')) {
                wd[0] = toupper(wd[0]);
                cout << wd;
            }
            cout << " ";
        }
        dash = 0;
    }
}
