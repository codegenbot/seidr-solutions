```cpp
#include <vector>
#include <iostream>

bool std::issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;

    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        int max_val = *std::max_element(lst.begin(), lst.end());

        auto it = std::find_if(lst.begin(), lst.end(),
            [&](int x) { return x == min_val; });
        result.push_back(*it);
        lst.erase(it);

        it = std::find_if(lst.begin(), lst.end(),
            [&](int x) { return x == max_val; });
        result.push_back(*it);
        lst.erase(it);
    }

    return result;
}

int main() {
    int num;
    std::vector<int> input;

    // Read input from user
    std::cout << "Enter numbers separated by space: ";
    while (std::cin >> num) {
        input.push_back(num);
    }
    
    if (!input.empty()) {
        std::vector<int> sorted_list = strange_sort_list(input);
        
        // Print output
        std::cout << "Sorted list is: ";
        for (int x : sorted_list)
            std::cout << x << " ";
        std::cout << std::endl;
    }
    
    return 0;
}