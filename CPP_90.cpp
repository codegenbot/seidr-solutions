#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1; 
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1]) {
            return sorted[i];
        }
    }
    return -1; 
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> lst(n);
    for(int i = 0; i < n; i++){
        std::cin >> lst[i];
    }
    std::cout << next_smallest(lst) << std::endl;
    return 0;
}