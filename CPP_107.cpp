#include <vector>
#include <iostream>

bool issame(int n){
    string num = to_string(n);
    string rev_num = num;
    reverse(rev_num.begin(), rev_num.end());
    return num == rev_num;
}

vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0);
    for(int i=1; i<=n; ++i){
        if(issame(i)){
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
    int n;
    cin >> n;
    vector<int> result = even_odd_palindrome(n);
    for(int i=0; i<result.size(); ++i){
        cout << result[i] << " ";
    }
    return 0;
}