#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst);

int main() {
    std::vector<int> lst;
    int n;

    // Read input from user
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << (i+1) << ": ";
        int x;
        std::cin >> x;
        lst.push_back(x);
    }

    // Check if the list is sorted
    bool result = is_sorted(lst);

    // Print output
    if(result)
        std::cout << "The list is sorted." << std::endl;
    else
        std::cout << "The list is not sorted." << std::endl;

    return 0;
}

bool is_sorted(std::vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            std::vector<int>::iterator it = std::unique(lst.begin(), lst.end());
            lst.erase(it, lst.end());
            return false;
        }
    }
    return true;
}