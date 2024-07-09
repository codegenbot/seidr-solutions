#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> lst;
    int n;

    std::cout << "Enter number of elements: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element: ";
        std::cin >> x;
        lst.push_back(x);
    }

    std::cout << "The next smallest number is: " << next_smallest(lst) << std::endl;

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