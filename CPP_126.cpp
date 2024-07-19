```
#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst) {
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            std::vector<int> temp;
            temp.push_back(lst[i]);
            if(std::count(temp.begin(), temp.end(), lst[i]) > 1)
                return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::vector<int> lst;
    for(int i = 0; i < n; i++){
        int x;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> x;
        lst.push_back(x);
    }

    if(is_sorted(lst))
        std::cout << "The array is sorted.\n";
    else
        std::cout << "The array is not sorted.\n";

    return 0;
}