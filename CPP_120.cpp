```
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
        auto it = std::remove(arr.begin(), arr.end(), max_val);
        arr.erase(it, arr.end());
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    int* arr = new int[n];
    
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }
    
    int k;
    std::cout << "Enter the number of maximum elements to find: ";
    std::cin >> k;
    
    std::vector<int> myVector (arr, arr+n);
    assert(issame(std::vector<int>({0, 1, 2, 3}), maximum(myVector, k)));
    return 0;
}