#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst);

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++){
        int temp;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> temp;
        lst.push_back(temp);
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
            vector<int>::iterator it = unique(lst.begin(), lst.end());
            lst.erase(it, lst.end());
            return false;
        }
    }
    return true;
}