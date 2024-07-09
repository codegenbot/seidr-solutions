#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    
    if (sorted.size() < 2) return -1; // or any other value that indicates "None"
    
    for (int i = 0; i < sorted.size(); i++) {
        if (i > 0) return sorted[i];
    }
}

int main() {
    int n;
    std::vector<int> lst;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << (i + 1) << ": ";
        std::cin >> x;
        lst.push_back(x);
    }
    
    int output = next_smallest(lst);
    if(output != -1)
        std::cout << "The next smallest number is: " << output;
    else
        std::cout << "No next smallest number exists";
    
    return 0;
}