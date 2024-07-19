```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst) {
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            if(std::count(lst.begin(), lst.end(), lst[i]) > 1)
                return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> num;
        input.push_back(num);
    }
    if(is_sorted(input))
        std::cout << "The list is sorted." << std::endl;
    else
        std::cout << "The list is not sorted." << std::endl;
    return 0;
}