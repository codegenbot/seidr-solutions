#include <vector>
#include <iostream>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result;
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        string s = to_string(i);
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (s == rev) {
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    result.push_back(even);
    result.push_back(odd);
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> b = even_odd_palindrome(n);
    for (int i = 0; i < b.size(); ++i) {
        cout << b[i] << " ";
    }
    return 0;
}