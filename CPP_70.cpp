#include <vector>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
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
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    std::vector<int> input;
    for (int i = 0; i < n; i++) {
        int temp;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> temp;
        input.push_back(temp);
    }

    std::vector<int> result = strange_sort_list(input);

    std::cout << "Sorted list: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    
    return 0;
}