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
    string line;
    while (getline(cin, line)) {
        if (line == "") {
            cout << endl;
            continue;
        }
        int len = line.length();
        string res = "";
        for (int i = 0; i < len; i++) {
            if (line[i] == '-') {
                if (i < len - 1) {
                    res += toupper(line[i + 1]);
                    i++;
                }
            }
            else if (line[i] == ' ') {
                res += " ";
                if (i < len - 1) {
                    res += line[i + 1];
                    i++;
                }
            }
            else {
                res += line[i];
            }
        }
        cout << res << endl;
    }
    return 0;
}
