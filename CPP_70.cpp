```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        std::vector<int> temp;
        temp.reserve(lst.size()); 
        for (auto it = lst.begin(); it != lst.end(); ++it) {
            if (*it != min_val)
                temp.push_back(*it);
        }
        lst.swap(temp); 

        if (!lst.empty()) {
            int max_val = *std::max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            temp.clear();
            for (auto it = lst.begin(); it != lst.end(); ++it) {
                if (*it != max_val)
                    temp.push_back(*it);
            }
            lst.swap(temp); 
        }
    }
    return result;
}

int main() {
    std::vector<int> input;
    for (int i = 0; i < 6; ++i) {
        int num;
        std::cin >> num;
        input.push_back(num);
    }

    std::vector<int> output = strange_sort_list(input);

    if (issame(output, {1,2,3,4,5,6})) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}