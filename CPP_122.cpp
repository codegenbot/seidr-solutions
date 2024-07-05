#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (arr[i] >= -99 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    assert(add_elements({1}, 1) == 1);
    assert(add_elements({100, -100, 50, -50, -99}, 5) == -99); // Example additional test case
    cout << "All test cases passed." << endl;
    return 0;
}