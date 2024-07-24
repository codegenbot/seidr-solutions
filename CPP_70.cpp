```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        if (min_val == max_val) {
            result.push_back(min_val);
            lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        } else {
            result.push_back(min_val);
            result.push_back(max_val);
            lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
            lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}

int main() {
    vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> val;
        input.push_back(val);
    }
    
    vector<int> output = strange_sort_vector(input);
    
    if (issame(output, vector<int>({1, 2, 3}))) {
        std::cout << "The sorted list is: ";
        for (int i : output) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "The sorted list is not as expected." << std::endl;
    }
    
    return 0;
}