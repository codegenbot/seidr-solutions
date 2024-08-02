#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> lst(n);
    std::cout << "Enter elements: ";
    for(int i = 0; i < n; ++i)
        std::cin >> lst[i];
    
    if(is_sorted(lst))
        std::cout << "The list is sorted." << std::endl;
    else
        std::cout << "The list is not sorted." << std::endl;
    
    return 0;
}