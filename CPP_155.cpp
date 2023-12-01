#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> even_odd_count(int num) {
    int evenCount = 0;
    int oddCount = 0;
    string numStr = to_string(abs(num));

    for (char c : numStr) {
        int digit = c - '0';
        if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    return {evenCount, oddCount};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    assert(issame(even_odd_count(13579), {0, 5}));
    assert(issame(even_odd_count(-2468), {4, 0}));

    cout << "All test cases passed!" << endl;

    return 0;
}