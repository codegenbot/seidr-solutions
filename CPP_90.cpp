#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst){
    if(lst.size() < 2){
        return 0;
    }
    std::sort(lst.begin(), lst.end());
    return lst[1];
}

int main() {
    std::vector<int> lst;
    int num;
    while (std::cin >> num) {
        lst.push_back(num);
    }
    std::cout << next_smallest(lst) << std::endl;
    return 0;
}