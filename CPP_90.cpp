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
    
    std::vector<int> lst(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> lst[i];
    }
    
    int result = next_smallest(lst);
    if(result != -1)
        std::cout << "The next smallest number is: " << result << std::endl;
    else
        std::cout << "No second smallest number exists." << std::endl;

    return 0;
}