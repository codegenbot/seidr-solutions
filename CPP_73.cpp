#include <iostream>
#include <vector>

int smallest_change(std::vector<int> arr){
    int n = arr.size();
    int changes = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            ++changes;
        }
    }
    return changes;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 2, 1}; // Example input
    std::cout << smallest_change(arr);
    return 0;
}