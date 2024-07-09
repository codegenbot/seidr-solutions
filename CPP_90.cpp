#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> lst(n);
    for (auto &i : lst) {
        std::cin >> i;
    }
    
    int result = next_smallest(lst);
    if (result != -1) {
        std::cout << "Next smallest is: " << result << "\n";
    } else {
        std::cout << "No next smallest\n";
    }
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