```cpp
using namespace std;

#include <vector>
#include <string>

bool issame(vector<int> a, vector<int> b) {
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

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool isPalindrome = true;
        int start = 0, end = str.length() - 1;
        while (start < end) {
            if (str[start] != str[end]) {
                isPalindrome = false;
                break;
            }
            start++;
            end--;
        }
        if (isPalindrome && i % 2 == 0) {
            result[0]++;
        } else if (isPalindrome && i % 2 != 0) {
            result[1]++;
        }
    }
    return result;
}

int main() {
    assert(issame(even_odd_palindrome(1), vector<int>{0, 1}));
    return 0;
}