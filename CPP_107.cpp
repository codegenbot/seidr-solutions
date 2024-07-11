#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(string str1, string str2){
    return str1 == str2;
}

vector<int> even_odd_palindrome(int n){
    vector<int> res(2, 0);
    for(int i = 1; i <= n; ++i){
        string str = to_string(i);
        string rev_str = str;
        reverse(rev_str.begin(), rev_str.end());
        if(issame(str, rev_str)){
            if(i % 2 == 0){
                res[0]++;
            } else {
                res[1]++;
            }
        }
    }
    return res;
}