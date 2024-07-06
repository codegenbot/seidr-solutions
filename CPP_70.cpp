#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());
        result.push_back(minVal);
        result.push_back(maxVal);
        auto newEnd = std::remove(lst.begin(), lst.end(), minVal);
        lst.erase(newEnd, lst.end());
        newEnd = std::remove(lst.begin(), lst.end(), maxVal);
        lst.erase(newEnd, lst.end());
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    std::vector<int> sorted_arr = strange_sort_vector(arr);

    if (issame(arr, sorted_arr)) {
        std::cout << "Array is already sorted." << std::endl;
    } else {
        std::cout << "Sorted array: ";
        for (int i : sorted_arr) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}