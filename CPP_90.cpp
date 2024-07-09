```
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> lst;
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        lst.push_back(temp);
    }

    int result = next_smallest(lst);

    std::cout << result << std::endl;

    return 0;
}

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; 
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    for (int i = 0; i < sorted_lst.size() - 1; i++) {
        if (sorted_lst[i] != sorted_lst[i + 1]) {
            return sorted_lst[i + 1];
        }
    }
    return -1;
}