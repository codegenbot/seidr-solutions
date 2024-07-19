#include <iostream>
#include <vector>
#include <algorithm>

void next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2)
        return; // or any other value that represents "None"
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] < sorted[i + 1])
            return;
    }
}

int main_ {
    std::vector<int> lst(std::vector<int>::size_type(0)); 
    int num;
    while(std::cin >> num) {
        lst.push_back(num);
    }
    if(lst.size()>0) {
        next_smallest(lst);
        std::cout << "smallest to the right: " << *std::next(std::min_element(lst.begin(), lst.end())) << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }
    return 0;
}