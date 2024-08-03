#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> even_odd_palindrome(int n){
    int even = 0, odd = 0;
    for(int i = 1; i <= n; ++i){
        string s = to_string(i);
        string rev = s;
        reverse(rev.begin(), rev.end());
        if(s == rev){
            if(i % 2 == 0){
                even++;
            } else {
                odd++;
            }
        }
    }
    return {even, odd};
}

int main(){
    assert(issame(even_odd_palindrome(1), {0, 1}));

    return 0;
}