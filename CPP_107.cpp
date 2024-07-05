#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPalindrome(int num) {
    string s = to_string(num);
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

vector<int> even_odd_palindrome(int n) {
    int even_count = 0, odd_count = 0;
    for (int i = 1; i <= n; ++i) {
        if (isPalindrome(i)) {
            if (i % 2 == 0) even_count++;
            else odd_count++;
        }
    }
    return {even_count, odd_count};
}

int main() {
    int n;
    cin >> n;
    vector<int> result = even_odd_palindrome(n);
    cout << "Even palindromes: " << result[0] << ", Odd palindromes: " << result[1] << endl;
    return 0;
}