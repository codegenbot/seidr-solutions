#include <vector>

int add_elements(const vector<int>& arr, int k) {
    int sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    assert(add_elements({1}, 1) == 0); // Sample test case
    return 0;
}