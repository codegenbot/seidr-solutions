#include <vector>
#include <iostream>
#include <cstdlib>

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[] = {1};
    int k = 1;
    cout << "Sum: " << add_elements(vector<int>(arr, arr + sizeof(arr) / sizeof(arr[0])), k) << endl;
    return 0;
}