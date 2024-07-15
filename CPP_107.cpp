#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0);
    for(int i=1; i<=n; ++i){
        string num = to_string(i);
        string rev_num = num;
        reverse(rev_num.begin(), rev_num.end());
        if(num == rev_num){
            if(i % 2 == 0){
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}

int main(){
    vector<int> expected = {0, 1};
    assert(even_odd_palindrome(1) == expected);
}