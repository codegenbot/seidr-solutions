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
    vector<int> findSubstring(string s, string t) {
        vector<int> result;
        if(s.length() < t.length() || s.length() == 0 || t.length() == 0) return result;
        map<char, int> hash;
        for(int i = 0; i < t.length(); i++) hash[t[i]]++;
        int left = 0, right = 0, count = t.length();
        while(right < s.length()){
            if(hash[s[right++]]-- >= 1) count--;
            if(count == 0) result.push_back(left);
            if(right - left == t.length() && hash[s[left++]]++ >= 0) count++;
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> result = s.findSubstring("abababab", "ab");
    for(int i = 0; i < result.size(); i++) cout<<result[i]<<" ";
    return 0;
}
