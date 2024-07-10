#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(const std::vector<int>& lst) {
    std::vector<int> copy_lst = lst;
    std::sort(copy_lst.begin(), copy_lst.end());
    int count = 0;
    for (int i = 1; i < copy_lst.size(); ++i) {
        if (copy_lst[i] != copy_lst[i - 1]) {
            count++;
        }
        if (count == 1) {
            return copy_lst[i];
        }
    }
    return -1;
}

int main() {
    std::vector<int> input;
    int num;
    while (std::cin >> num)
    {
        input.push_back(num);
    }

    int result = next_smallest(input);
    std::cout << result << std::endl;

    return 0;
}