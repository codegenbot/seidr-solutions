#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        if (!lst.empty())
            result.push_back(max_val);
        lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
    }
    return result;
}

int main() {
    std::vector<int> numbers;
    int n;
    
    // Take input from the user
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << (i+1) << ": ";
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    // Call the function
    std::vector<int> sorted_list = strange_sort_list(numbers);

    // Print the result
    if(issame(sorted_list, numbers)) {
        std::cout << "The list is already in the desired order.\n";
    } else {
        std::cout << "The sorted list: ";
        for(auto i : sorted_list) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    }

    return 0;
}