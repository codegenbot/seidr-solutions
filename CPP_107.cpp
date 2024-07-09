#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> even_odd_palindrome(int n) {
    vector<int> result = {0, 0};
    for (int i = 1; i <= n; ++i) {
        string num = to_string(i);
        if (num == string(num.rbegin(), num.rend())) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
    return 0;
}