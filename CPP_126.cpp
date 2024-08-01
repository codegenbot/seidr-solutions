#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> temp;
            for(int j = 0; j < i; j++)
                temp.push_back(lst[j]);
            if(count(temp.begin(), temp.end(), lst[i]) > 1)
                return false;
            break;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    
    std::vector<int> lst(n);
    
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> lst[i];
    }
    
    if(is_sorted(lst))
        std::cout << "The array is sorted.\n";
    else
        std::cout << "The array is not sorted.\n";
    
    return 0;
}