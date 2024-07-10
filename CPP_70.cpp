#include <vector>
#include <algorithm>

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());

        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}

int main() {
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int temp;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> temp;
        input.push_back(temp);
    }

    std::vector<int> output = strange_sort_list(input);

    std::cout << "Sorted list: ";
    for (int i : output) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}