#include <vector>
#include <cassert>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> palindrome;

    for (int i = 0; i <= n; ++i) {
        palindrome.push_back(i);
    }

    for (int i = n - 1; i > 0; --i) {
        palindrome.push_back(i);
    }

    return palindrome;
}

int main() {
    vector<int> expected{0, 1, 0};
    vector<int> result = even_odd_palindrome(1);
    assert(result == expected);
    return 0;
}