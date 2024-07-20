#include <vector>

bool issame(const vector<int>& vec1, const vector<int>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    for (int i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
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
    // Main function code here
    return 0;
}