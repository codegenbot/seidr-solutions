#include <vector>
#include <algorithm>
#include <iostream>
#include <limits>
#include <cassert>

using namespace std;

std::vector<int> get_odd_collatz(int n);

bool issame(vector<int> a, vector<int> b) {
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
    assert(issame(get_odd_collatz(1), vector<int>({1})));  
    int input;
    cout << "Enter a number: ";
    cin >> input;
    if(input < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        return -1;
    }
    vector<int> output = get_odd_collatz(input);
    for (int num : output) {
        cout << num << " ";
    }
    return 0;
}