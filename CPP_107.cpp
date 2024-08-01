#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> even_odd_palindrome(int n){
    vector<int> res(2, 0);
    for(int i = 1; i <= n; ++i){
        string s = to_string(i);
        string rev = s;
        reverse(rev.begin(), rev.end());
        if(s == rev){
            if(i % 2 == 0){
                res[0]++;
            } else {
                res[1]++;
            }
        }
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    
    vector<int> result = even_odd_palindrome(n);
    
    assert(issame(result, {0, 1}));

    for(int i = 0; i < result.size(); ++i){
        cout << result[i] << " ";
    }
    
    return 0;
}