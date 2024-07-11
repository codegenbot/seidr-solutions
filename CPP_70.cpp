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
    std::vector<int> input_vector = {4, 2, 9, 6, 23, 12, 34, 27};
    std::vector<int> sorted_vector = strange_sort_vector(input_vector);
    
    if (issame(sorted_vector, std::vector<int>({2, 4, 6, 9, 12, 23, 27, 34}))) {
        std::cout << "The vector is correctly sorted." << std::endl;
    } else {
        std::cout << "The vector is not correctly sorted." << std::endl;
    }
    
    return 0;
}