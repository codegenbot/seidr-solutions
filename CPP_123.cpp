#include <vector>
#include <algorithm>
#include <iostream>
#include <limits>

using namespace std;

bool same(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) { 
            result.push_back(n);
        }
    }
    return result;
}

int main() {
    assert(same(get_odd_collatz(1), vector<int>({1})));  
    int input;
    cout << "Enter a number: ";
    cin >> input;
    vector<int> output = get_odd_collatz(input);
    for (int num : output) {
        cout << num << " ";
    }
    return 0;
}