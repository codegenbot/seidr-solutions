#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

int main() {
    int n, k;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> vec[i];
    }
    
    std::cout << "Enter k: ";
    std::cin >> k;
    
    std::vector<int> res = maximum(vec, k);
    if (!res.empty()) {
        std::cout << "Maximum elements are: ";
        for (int i = 0; i < k; ++i) {
            std::cout << res[i] << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "Not enough elements to print.\n";
    }

    return 0;
}