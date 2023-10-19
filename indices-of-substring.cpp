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
    string s, t;
    cin >> s;
    moniter:{
        cin >> t;
        int sLen = s.length();
        int tLen = t.length();
        vector<int> ans;
        if(tLen==1 && sLen == 1) {cout << endl << "0"; break moniter;}
        if(tLen > 1){
            for(int i = 0; i < sLen-1; i++){
                int j,k;
                k = 0;
                for(j = i; j < i + tLen; j++){
                    if(k < tLen && s[j] == t[k]){
                        k++;
                    }
                }
                if(k == tLen){ans.push_back(i);}
            }
        }
        if(tLen == 1){
            for(int i = 0; i < sLen; i++){
                if(s[i] == t[0]){
                    ans.push_back(i);
                }
            }
        }
        if(ans.empty()){cout << endl << -1;break moniter;}
        for(int i = 0; i < ans.size(); i++){
            if(i == ans.size()-1){cout << endl << ans[i]; break;}
            cout << ans[i] << " ";
        }
    }
}
