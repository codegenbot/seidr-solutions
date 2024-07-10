#include <iostream>
#include <vector>
#include <cassert>

bool below_threshold(const std::vector<int>& l, int t) {
    for(int num : l){
        if(num >= t){
            return false;
        }
    }
    return true;
}

int main() {
    // Input
    int n, t;
    std::cin >> n;
    std::vector<int> l(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> l[i];
    }
    std::cin >> t;

    // Output
    if(below_threshold(l, t)) {
        std::cout << "All numbers are below the threshold." << std::endl;
    } else {
        std::cout << "At least one number is equal to or above the threshold." << std::endl;
    }

    return 0;
}