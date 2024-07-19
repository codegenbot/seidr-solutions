#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2)
        return -1; 
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] < sorted[i + 1])
            return sorted[i + 1];
    }
    return -1; 
}

int main() {
    std::vector<int> lst;
    int num;
    while(std::cin >> num) {
        lst.push_back(num);
    }
    if(lst.size()>0) {
        std::cout << next_smallest(lst) << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }
    return 0;