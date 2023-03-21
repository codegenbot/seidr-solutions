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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0

input:
!
!
output:
1
0
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0

input:
hi
hihihihihihihihihihi
output:
0

input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11
*/
int main() {
    string text;
    string target;
    vector<int> indices;
    getline(cin, text);
    getline(cin, target);
    int target_length = target.length();
    int text_length = text.length();
    for (int i = 0; i < text_length; i++) {
        if (text[i] == target[0]) {
            bool is_target = true;
            for (int j = 0; j < target_length; j++) {
                if (i + j >= text_length || text[i+j] != target[j]) {
                    is_target = false;
                    break;
                }
            }
            if (is_target) {
                indices.push_back(i);
            }
        }
    }
    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << " ";
    }
    if (indices.size() == 0) {
        cout << endl;
    }
    cout << endl;
}
