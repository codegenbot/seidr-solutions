#include <vector>

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (to_string(arr[i]).length() <= 2 || to_string(arr[i]).find("0") != string::npos) {
            sum += arr[i];
        }
    }
    return sum;
}