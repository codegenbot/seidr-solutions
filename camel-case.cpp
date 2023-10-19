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
    bool isSpace = true;
    while(getline(cin, s)) {
        for(char c : s) {
            if(c == ' ') {
                isSpace = true;
                cout<<c;
            } else if(c == '-') {
                isSpace = true;
            } else {
                if(isSpace) {
                    c = toupper(c);
                    isSpace = false;
                }
                cout<<c;
            }
        }
        cout<<endl;
    }
    return 0;
}
