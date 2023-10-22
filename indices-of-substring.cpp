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
class Solution {
public:
    vector<int> findTargets(string text, string target) {
        vector<int> result;
        int n = text.size();
        int m = target.size();
        // 构造后缀数组
        int * suffix = new int[n];
        suffix[n-1] = -1;
        for(int i = n - 2; i >= 0; i--) {
            int j = i;
            while(j >= 0 && text[j] == text[n-1-i+j]) j--;
            suffix[i] = j;
        }
        // kmp search
        int i = 0, j = 0;
        while(i < n) {
            if(j == -1 || text[i] == target[j]) {
                i++;
                j++;
            } else {
                j = suffix[j];
            }
            if(j == m) {
                result.push_back(i - j);
                j = suffix[j];
            }
        }
        delete[] suffix;
        return result;
    }
};
int main() {
    
    
    return 0;
}
