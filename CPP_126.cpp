```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst){
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] >= lst[i+1]){
            if(std::count(lst.begin(), lst.end(), lst[i]) > 1)
                return false;
        }
    }
    return true;
}

int main(){
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> vec(n);
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> vec[i];
    }

    if(is_sorted(vec))
        std::cout << "The vector is sorted." << std::endl;
    else
        std::cout << "The vector is not sorted." << std::endl;

    return 0;
}