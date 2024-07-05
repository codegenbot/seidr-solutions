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
    result.push_back(1); // Add 1 to the result as the sequence always ends at 1
    sort(result.begin(), result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert (issame(get_odd_collatz(1), {1}));
    assert (issame(get_odd_collatz(7), {1, 3, 5, 7, 11, 13, 17, 31}));
    cout << "All tests passed!" << endl;
    return 0;
}