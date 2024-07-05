#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 != 0) {
            result.push_back(n);
        }
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1); // 1 is always in the sequence
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> expected_result = {1};
    assert(get_odd_collatz(1) == expected_result);
    cout << "All tests passed!" << endl;
    return 0;
}