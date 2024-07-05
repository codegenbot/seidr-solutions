#include <vector>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    int n = q.size();
    int sum = 0;

    // Check if the vector is palindromic
    for (int i = 0; i < n / 2; ++i) {
        if (q[i] != q[n - 1 - i]) {
            return false;
        }
    }

    // Calculate the sum of the elements
    for (int i = 0; i < n; ++i) {
        sum += q[i];
    }

    // Check if the sum is less than or equal to the maximum possible weight
    return sum <= w;
}