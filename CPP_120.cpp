```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        int max_val = *std::max_element(arr.begin(), arr.end());
        result.push_back(max_val);
        auto it = arr.erase(std::remove(arr.begin(), arr.end(), max_val), arr.end());
    }
    return result;
}

int main() {
    int k=4;
    int arr[] = {1, 2, 3, -23, 243, -400, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::vector<int> arr_vec(arr, arr+n);
    std::cout << "Result: ";
    for (int i = 0; i < k; ++i) {
        std::cout << maximum(arr_vec, k)[i] << " ";
    }
    std::cout << std::endl;
}