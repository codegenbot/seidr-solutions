#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.empty()) return -1;
    std::vector<int> copy = lst;
    std::sort(copy.begin(), copy.end());
    int second_smallest = (copy.size() > 1)? copy[1] : -1; 
    return second_smallest;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> lst;
    for(int i = 0; i < n; ++i) {
        int x;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> x;
        lst.push_back(x);
    }
    
    std::cout << "The next smallest number is: " << next_smallest(lst) << std::endl;
    
    return 0;
}