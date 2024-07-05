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
    result.push_back(1); // 1 is always part of the sequence
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(get_odd_collatz(1) == vector<int>{1});
    // Additional test cases if needed
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> odd_collatz_sequence = get_odd_collatz(n);
    cout << "Odd numbers in the Collatz sequence:";
    for (int num : odd_collatz_sequence) {
        cout << " " << num;
    }
    cout << endl;
    return 0;
}