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

int main() {
    // Test the function with some example inputs
    vector<int> test_vector = {1, 2, 3, 2, 1};
    int weight_limit = 10;
    bool result = will_it_fly(test_vector, weight_limit);
    // Output the result
    if (result) {
        cout << "The plane will fly!" << endl;
    } else {
        cout << "The plane won't fly!" << endl;
    }
    return 0;
}