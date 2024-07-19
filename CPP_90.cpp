#include <iostream>
#include <vector>
#include <algorithm>

int smallest_after(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2)
        return -1; 
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] < sorted[i + 1])
            return sorted[i + 1];
    }
    return -1;
}

int main() {
    std::vector<int> lst(std::vector<int>::size_type(0)); 
    int num;
    while(std::cin >> num) {
        lst.push_back(num);
    }
    if(lst.size()>0) {
        std::cout << smallest_after(lst) << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }
    return 0;
}