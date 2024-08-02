```
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return (a == b);
}

int main() {
    std::vector<int> arr;
    int k;

    // Read input from user
    std::cout << "Enter the size of the array: ";
    std::cin >> k;
    for (int i = 0; i < k; i++) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        arr.push_back(num);
    }

    // Call the function
    vector<int> result = maximum(arr, k);

    return 0;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    for (int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}