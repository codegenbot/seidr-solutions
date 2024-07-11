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

    std::vector<int> input_vector(n);
    std::cout << "Enter the elements: ";
    for (auto& i : input_vector) {
        std::cin >> i;
    }

    auto sorted_vector = strange_sort_vector(input_vector);

    std::cout << "Sorted Vector: ";
    for (const auto& i : sorted_vector) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    if (issame(sorted_vector, input_vector)) {
        std::cout << "The original and the sorted vector are same.\n";
    } else {
        std::cout << "The original and the sorted vector are not same.\n";
    }

    return 0;
}