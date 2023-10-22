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
    int n = str.size();
    int i = 0;
    while(i < n) {
        int j = i;
        if(str[i] == '-') {
            i++;
            str[i] = toupper(str[i]);
            continue;
        }
        while(j < n && str[j] != ' ' && str[j] != '-') {
            j++;
        }
        if(j < n && str[j] == '-') {
            str[j] = ' ';
        }
        i = j;
    }
    cout << str << endl;
    return 0;
}
