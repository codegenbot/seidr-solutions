#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> even_odd_palindrome(int n);
bool issame(vector<int> a, vector<int> b);

vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0);
    for(int i=1; i<=n; ++i){
        string num = to_string(i);
        string rev_num = num;
        reverse(rev_num.begin(), rev_num.end());
        if(num == rev_num){
            if(i%2 == 0){
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    // Code for checking if two vectors are the same
}

int main(){
    assert(issame(even_odd_palindrome(1), {0, 1}));
    
    return 0;
}