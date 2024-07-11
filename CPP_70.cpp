#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        auto min_iter = std::min_element(lst.begin(), lst.end());
        result.push_back(*min_iter);
        lst.erase(min_iter);

        if (!lst.empty()) {
            auto max_iter = std::max_element(lst.begin(), lst.end());
            result.push_back(*max_iter);
            lst.erase(max_iter);
        }
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> vec(n);
    for(int i=0; i<n; ++i) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> vec[i];
    }

    std::vector<int> sorted = strange_sort_vector(vec);

    std::cout << "Sorted vector: ";
    for (int x : sorted) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}