#include <iostream>
#include <vector>

using namespace std;

int can_arrange(vector<int> arr) {
    for (int i = arr.size() - 1; i > 0; --i) {
        if (arr[i] < arr[i - 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    // Test cases
    cout << can_arrange({4, 3, 1, 2}) << endl; // Expected output: 2
    cout << can_arrange({1, 2, 3, 4}) << endl; // Expected output: -1
    cout << can_arrange({}) << endl;           // Expected output: -1
    return 0;
}