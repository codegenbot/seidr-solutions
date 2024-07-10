#include <vector>

std::vector<int> maximum(std::vector<int> arr, int k){
    std::sort(arr.begin(), arr.end());
    arr.resize(k);
    return arr;
}

bool issame(std::vector<int> arr1, std::vector<int> arr2){
    return arr1 == arr2;
}

int main() {
    std::vector<int> arr = {5, 2, 9, 10, 1};
    int k = 3;
    arr = max(arr, k);
    for (int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}