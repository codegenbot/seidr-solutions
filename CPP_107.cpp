#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> even_odd_palindrome(int n) {
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

int main() {
    // Sample usage
    vector<int> result = even_odd_palindrome(10);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}