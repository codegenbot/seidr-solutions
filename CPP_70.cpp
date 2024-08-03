#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst){
    std::sort(lst.begin(), lst.end());
    std::vector<int> result;
    int start = 0, end = lst.size() - 1;
    while (start <= end) {
        result.push_back(lst[start++]);
        if (start <= end) {
            result.push_back(lst[end--]);
        }
    }
    return result;
}

void main() {
    std::vector<int> input;
    int num;
    std::cout << "Enter numbers (0 to stop): ";
    while (std::cin >> num && num != 0){
        input.push_back(num);
    }

    std::vector<int> result = strange_sort_list(input);

    std::cout << "Sorted list: ";
    for(int num : result){
        std::cout << num << " ";
    }
}