```cpp
#include <vector>
#include <algorithm>

bool same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> maxResult(std::vector<int> arr, int k) {
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
    std::cout << "Enter the number of elements in array: ";
    std::cin >> n;
    std::vector<int> test(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> test[i];
    }
    k = 5;
    std::vector<int> result = maxResult(test, k);
    std::cout << "Maximum " << k << " elements are: ";
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    if (same(result, {3,243,0,-23,-400})) {
        std::cout << "The expected output matches." << std::endl;
    } else {
        std::cout << "The expected output does not match." << std::endl;
    }
    return 0;
}