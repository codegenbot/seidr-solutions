#include <vector>
#include <algorithm>
#include <string>

bool issame(const string& a, const string& b) {
    return a == b;
}

vector<int> even_odd_palindrome(int n);

int main() {
    int n;
    cin >> n;
    vector<int> result = even_odd_palindrome(n);
    cout << result[0] << " " << result[1];
    return 0;
}

vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0);
    for(int i=1; i<=n; ++i){
        string num = to_string(i);
        string rev_num = num;
        reverse(rev_num.begin(), rev_num.end());
        if(issame(num, rev_num)){
            if(i % 2 == 0){
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}