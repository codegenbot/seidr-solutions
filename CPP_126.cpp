#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst);

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> lst;
    for(int i = 0; i < n; i++){
        int x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        lst.push_back(x);
    }

    if(is_sorted(lst)){
        std::cout << "The list is sorted.\n";
    } else {
        std::cout << "The list is not sorted.\n";
    }

    return 0;
}

bool is_sorted(std::vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    std::vector<int>::iterator it;
    for(it = unique(lst.begin(), lst.end()); it != lst.end(); ++it){
        if(std::distance(it, lst.end()) > 1)
            return false;
    }
    return true;
}