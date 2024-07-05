#include <vector>
#include <iostream>
#include <cassert>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    int n = q.size();
    int sum = 0;

    // Check if the vector is a palindrome
    for (int i = 0; i < n / 2; ++i) {
        if (q[i] != q[n - i - 1]) {
            return false;
        }
    }

    // Calculate the sum of elements
    for (int num : q) {
        sum += num;
    }

    // Check if the sum is less than or equal to the maximum possible weight
    return sum <= w;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    assert(will_it_fly({1, 2, 2, 1}, 6) == true);
    assert(will_it_fly({1, 2, 3}, 6) == false);
    assert(will_it_fly({1, 2, 3, 2, 1}, 9) == true);

    cout << "All test cases passed!" << endl;
    return 0;
}