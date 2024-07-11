#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int next_smallest(std::vector<int> lst) {
        if (lst.empty()) return -1; // None is equivalent to -1 in C++.
        std::vector<int> copy = lst;
        std::sort(copy.begin(), copy.end());
        for (int i = 0; i < copy.size() - 1; i++) {
            if (copy[i] != copy[i+1]) {
                return copy[i+1];
            }
        }
        return -1; // If all elements are the same, return -1.
    }

    int main() {
        std::vector<int> lst;
        int n;
        while(std::cin >> n) {
            lst.push_back(n);
        }
        int result = next_smallest(lst);
        if(result == -1)
            std::cout << "No smaller number";
        else
            std::cout << "The smallest number is: " << result;
    }