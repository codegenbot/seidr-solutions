#include <iostream>
#include <vector>

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    vector<int> arr = {111, 21, 3, 4000, 5, 6, 7, 8, 9};
    int k = 4;
    int result = add_elements(arr, k);
    cout << "Output: " << result << endl;
    return 0;
}