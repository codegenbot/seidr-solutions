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

void find_index(string str, string pattern){
    int n = str.size();
    int m = pattern.size();
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(str[i] == pattern[0]){
            if(m <= n-i){
                bool found = true;
                for(int j = 1; j < m; j++){
                    // cout << str[i+j] << " " << pattern[j] << endl;
                    if(str[i+j] != pattern[j]){
                        found = false;
                        break;
                    }
                }
                if(found)
                    ans.push_back(i);
            }
        }
    }
    for(auto i: ans){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    string str, pattern;
    getline(cin, str);
    getline(cin, pattern);
    find_index(str, pattern);
    return 0;
}
