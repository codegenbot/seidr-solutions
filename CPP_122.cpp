#include <vector>
#include <algorithm>

int add_elements(vector<int> arr, int k) {
    vector<int> two_digit_numbers;
    for (int i = 0; i < k; i++) {
        if (arr[i] <= 99 || arr[i] >= 1000) {
            two_digit_numbers.push_back(arr[i]);
        }
    }
    int sum = 0;
    for (int num : two_digit_numbers) {
        sum += num;
    }
    return sum;
}