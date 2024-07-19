#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            if(std::count(lst.begin(), lst.end(), lst[i]) > 1)
                return false;
        }
    }
    return true;
}

int main(){
    int n;
    std::cin >> n;
    std::vector<int> lst(n);
    for(int i = 0; i < n; i++){
        std::cin >> lst[i];
    }
    
    if(is_sorted(lst))
        std::cout << "The list is sorted." << std::endl;
    else
        std::cout << "The list is not sorted." << std::endl;

    return 0;
}