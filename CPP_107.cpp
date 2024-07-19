#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0);
    for(int i = 1; i <= n; ++i) {
        string num_str = to_string(i);
        string rev_num_str = num_str;
        reverse(rev_num_str.begin(), rev_num_str.end());
        if(num_str == rev_num_str) {
            if(i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}

int main(){
    assert(isEqual(even_odd_palindrome(1) , {0, 1}));
  
    return 0;
}