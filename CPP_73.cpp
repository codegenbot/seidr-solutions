#include <iostream>
#include <vector>

int smallest_change(std::vector<int> arr);

int main() {
    std::vector<int> input = {1, 2, 3, 4, 5, 6, 7, 6, 5, 4, 3, 2, 1};
    int result = smallest_change(input);
    std::cout << "The smallest number of changes needed is: " << result << std::endl;
    return 0;
}

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    int changes = 0;
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            changes++;
        }
    }
    return changes;
}