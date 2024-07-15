#include <vector>
#include <algorithm>

std::vector<int> leaders(int* arr, int n) {
    std::vector<int> result;
    int maxRight = arr[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
        } else if (maxRight == arr[i]) {
            result.push_back(maxRight);
        }
    }
    return result;
}

int main() {
    int input[] = {7, 5, 2, 4};
    std::vector<int> result = leaders(input, sizeof(input) / sizeof(input[0]));
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}