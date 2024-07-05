#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

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
    result.push_back(1); 
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(get_odd_collatz(1) == vector<int>{1});
    cout << "Test Passed." << endl;
    return 0;
}