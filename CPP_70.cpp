```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool areEqual(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        
        int count = 0;
        for(auto it = lst.begin(); it != lst.end(); ++it){
            if(*it == min_val){
                ++count;
            }
        }

        while(count > 0 && !lst.empty()){
            int max_val = *std::max_element(lst.begin(), lst.end());
            result.push_back(max_val);

            auto it = lst.begin();
            while (!lst.empty()) {
                if (*std::min_element(it, lst.end()) == max_val) {
                    it = lst.erase(it);
                    --count;
                } else {
                    ++it;
                }
            }
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

    if (areEqual(output, {1,2,3,4,5,6})) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    assert(areEqual(strange_sort_list({111}), {111}));
    return 0;
}