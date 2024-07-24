#include <vector>
#include <algorithm>
#include <iostream>

bool isSame(std::vector<int> a, std::vector<int> b) {
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
    std::vector<int> input;
    std::cout << "Enter numbers (space separated): ";
    std::string line;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    int num;
    while (ss >> num) {
        input.push_back(num);
    }
    std::vector<int> output = strange_sort_list(input);
    std::cout << "Sorted list: ";
    for (int x : output) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}