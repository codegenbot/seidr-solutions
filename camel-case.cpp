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
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ' || input[i] == '-') {
            if (word.length() > 0) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += input[i];
        }
    }
    if (word.length() > 0) {
        words.push_back(word);
    }
    string output = "";
    for (int i = 0; i < words.size(); i++) {
        if (i == 0) {
            output += words[i];
        } else {
            output += words[i][0];
            for (int j = 1; j < words[i].length(); j++) {
                output += tolower(words[i][j]);
            }
        }
    }
    cout << output << endl;
    return 0;
}
