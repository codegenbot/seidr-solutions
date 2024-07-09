```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(vector<int> lst);

int main() {
    vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++){
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }
    
    if(is_sorted(lst))
        std::cout << "The list is sorted." << std::endl;
    else
        std::cout << "The list is not sorted." << std::endl;

    return 0;
}

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    vector<int>::iterator it;
    for(it = unique(lst.begin(), lst.end()); it != lst.end(); ++it){
        if(std::distance(it, lst.end()) > 1)
            return false;
    }
    return true;
}