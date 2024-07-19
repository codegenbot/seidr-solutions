#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> lst;
    int n;

    // Read input from user
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        lst.push_back(x);
    }

    // Check if the list is sorted
    bool result = true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            if(std::count(lst.begin(), lst.end(), lst[i]) > 1)
                result = false;
        }
    }

    // Print the output
    std::cout << "The list is " << (result ? "" : "not ") << "sorted." << std::endl;

    return 0;
}