#include <iostream>
#include <vector>

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        int temp;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> temp;
        lst.push_back(temp);
    }
    
    bool isSorted = is_sorted(lst);
    
    if(isSorted)
        std::cout << "The list is sorted.\n";
    else
        std::cout << "The list is not sorted.\n";
    
    return 0;
}

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
        int count = 0;
        for(int j = 0; j < lst.size(); j++){
            if(lst[j] == lst[i]){
                count++;
            }
        }
        if(count > 1){
            return false;
        }
    }
    return true;
}