#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<int> even_odd_palindrome(int n);

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
    // Your test cases and assert statements here
    return 0;
}