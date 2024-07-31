#include <vector>

int smallest_change(const std::vector<int>& arr) {
    int n = arr.size();
    int changes = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - 1 - i]) {
            ++changes;
        }
    }
    return changes;
}

int main() {
    std::vector<int> test_case1 = {1, 2, 3, 4, 5};
    std::vector<int> test_case2 = {1, 2, 2, 1};
    
    int result1 = smallest_change(test_case1);
    int result2 = smallest_change(test_case2);
    
    return 0;
}