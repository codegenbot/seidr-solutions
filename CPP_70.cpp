```cpp
#include <vector>
#include <algorithm>

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        if (min_val == max_val) {
            for(int i : lst) {
                if(i == min_val) {
                    result.push_back(i);
                    lst.erase(std::remove(lst.begin(), lst.end(), i), lst.end());
                    break;
                }
            }
        } else {
            while (!lst.empty()) {
                int val = *min_element(lst.begin(), lst.end());
                for(int i : lst) {
                    if(i == val) {
                        result.push_back(i);
                        lst.erase(std::remove(lst.begin(), lst.end(), i), lst.end());
                        break;
                    }
                }
            }
        }
    }
    return result;
}

int main() {
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int val;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> val;
        input.push_back(val);
    }
    std::vector<int> output = strange_sort_list(input);
    std::cout << "Sorted list: ";
    for(int i : output) {
        std::cout << i << " ";
    }
    return 0;
}