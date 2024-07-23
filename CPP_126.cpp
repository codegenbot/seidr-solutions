#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst) {
    if(lst.size() <= 1) return true;
    std::vector<int> sorted_lst = lst; 
    for(int i = 1; i < sorted_lst.size(); i++){
        if(sorted_lst[i-1] >= sorted_lst[i]) return false;
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> vec;

    for(int i = 0; i < n; i++) {
        int val;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> val;
        vec.push_back(val);
    }

    if(is_sorted(vec)) {
        std::cout << "The vector is sorted.\n";
    } else {
        std::sort(vec.begin(), vec.end());
        
        if(is_sorted(vec)) {
            std::cout << "The vector is now sorted.\n";
        } else {
            std::cout << "The vector is not sorted after sorting.\n";
        }
    }

    return 0;
}