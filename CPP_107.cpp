#include <vector>
#include <string>
#include <iostream>

using namespace std;

bool is_same(vector<int> a, vector<int> b);

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2, 0);
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        int len = s.length();
        bool isPalindrome = true;
        for (int j = 0; j < len / 2; j++) {
            if (s[j] != s[len - j - 1]) {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome) {
            if (i % 2 == 0) {
                result[0]++;
            }
            else {
                result[1]++;
            }
        }
    }
    return result;
}

int main() {
    vector<int> expected = { 0, 1 };
    vector<int> result = even_odd_palindrome(1);
    if (is_same(result, expected)) {
        cout << "Test case passed." << endl;
    }
    else {
        cout << "Test case failed." << endl;
    }
    return 0;
}

bool is_same(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}