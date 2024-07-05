#include <iostream>
#include <vector>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    int changes = 0;
    for(int i = 0; i < n / 2; ++i) {
        if(arr[i] != arr[n - i - 1]) {
            ++changes;
        }
    }
    return changes;
}

int main() {
    // Example usage
    std::cout << (smallest_change({0, 1}) == 1) << std::endl; // Outputs: 1 (which means true)
    return 0;
}