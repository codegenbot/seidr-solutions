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
    string s;
    getline(cin, s);
    //Make sure that - -> " "
    int i = 0;
    while(i < s.size()) {
        if(s[i] == '-') {
            s[i] = ' ';
        }
        i++;
    }
    //Make sure that the first letter is capitalized
    i = 0;
    while(i < s.size()) {
        if(s[i] == ' ') {
            if(s[i+1] >= 'a' && s[i+1] <= 'z') {
                s[i+1] = s[i+1] - 32;
            }
        }
        i++;
    }
    //Delete the space
    i = 0;
    while(i < s.size()) {
        if(s[i] == ' ') {
            s.erase(i,1);
        }
        i++;
    }
    //Make sure that the first letter is capitalized again
    i = 0;
    while(i < s.size()) {
        if(s[i] == ' ') {
            if(s[i+1] >= 'a' && s[i+1] <= 'z') {
                s[i+1] = s[i+1] - 32;
            }
        }
        i++;
    }
    //Delete the space again
    i = 0;
    while(i < s.size()) {
        if(s[i] == ' ') {
            s.erase(i,1);
        }
        i++;
    }
    cout << s << endl;
}
