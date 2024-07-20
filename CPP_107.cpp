#include <vector>

bool issame(vector<int> v1, vector<int> v2) {
    if(v1.size() != v2.size())
        return false;
    
    for(int i = 0; i < v1.size(); ++i) {
        if(v1[i] != v2[i])
            return false;
    }
    
    return true;
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
    // Main function logic using even_odd_palindrome function
}