#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

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
    assert(issame(even_odd_palindrome(1), vector<int>{0, 1, 0}));
}