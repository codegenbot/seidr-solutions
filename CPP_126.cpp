```
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    bool result;
    std::vector<int> lst;
    
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }
    
    result = is_sorted(lst);
    
    if (result)
        std::cout << "The list is sorted.\n";
    else
        std::cout << "The list is not sorted.\n";
    
    return 0;
}

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            if(count(lst.begin(), lst.end(), lst[i]) > 1)
                return false;
        }
    }
    return true;
}