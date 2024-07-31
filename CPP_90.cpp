```
#include <vector>
#include <algorithm>
#include <iostream>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1; 
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1]) {
            return sorted[i + 1];
        }
    }
    return -1;
}

int readInput() {
    int num;
    std::vector<int> lst;

    while(std::cin >> num) {
        lst.push_back(num);
    }

    if(lst.size() > 0) {
        int result = next_smallest(lst);
        std::cout << "The next smallest number is: " << result << std::endl;
    } else {
        std::cout << "No numbers entered." << std::endl;
    }
    
    return 0;
}

int main() {
    readInput();
    return 0;
}