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
string toCamel(string kebab){
    bool space = true;
    for (int i = 0; i < kebab.size(); i ++){
        if (kebab[i] == '-'){
            kebab[i] = ' ';
            space = false;
        }
    }
    if (space){
        return kebab;
    }
    string res = "";
    string word = "";
    for (int i = 0; i < kebab.size(); i ++){
        if (kebab[i] == ' '){
            res += word[0] - 'a' + 'A';
            for (int j = 1; j < word.size(); j ++){
                res += word[j];
            }
            word = "";
            res += ' ';
            continue;
        }
        word += kebab[i];
    }
    if (word.size() > 0){
        res += word[0] - 'a' + 'A';
        for (int j = 1; j < word.size(); j ++){
            res += word[j];
        }
    }
    return res;
}
int main() {
    cout << toCamel("camel-case example-test-string") << endl;
    cout << toCamel("nospaceordash") << endl;
    cout << toCamel("two-words") << endl;
    cout << toCamel("two words") << endl;
    cout << toCamel("all separate words") << endl;
