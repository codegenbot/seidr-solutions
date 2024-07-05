#include <iostream>
#include <vector>

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
    cout << add_elements({1}, 1) << endl; // Output should be 1
    return 0;
}