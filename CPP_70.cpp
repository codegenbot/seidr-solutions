#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
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
    
    if (output == std::vector<int>({1,2,3,4,5,6})) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    
    return 0;
}