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
    string input;
    getline(cin, input);
    vector<string> words;
    string word = "";
    for(int i = 0; i < input.size(); i++) {
        if(input[i] == ' ') {
            words.push_back(word);
            word = "";
        } else if(input[i] == '-') {
            words.push_back(word);
            word = "";
            words.push_back("-");
        } else {
            word += input[i];
        }
    }
    words.push_back(word);
    for(int i = 0; i < words.size(); i++) {
        if(words[i] == "-") {
            cout << " ";
        } else {
            bool first = true;
            for(int j = 0; j < words[i].size(); j++) {
                if(first) {
                    cout << (char)toupper(words[i][j]);
                    first = false;
                } else {
                    cout << words[i][j];
                }
            }
        }
    }
    return 0;
}
