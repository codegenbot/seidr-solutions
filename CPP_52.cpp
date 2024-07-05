#include <vector>
#include <cassert>
#include <iostream> // include for input/output 

bool below_threshold(const std::vector<int>& l, int t) {
    for(int num : l) {
        if(num >= t) return false;
    }
    return true;
}

int main() {
    int n, t;
    std::cin >> n >> t;
    std::vector<int> l(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> l[i];
    }

    if (below_threshold(l, t)) {
        std::cout << "All elements are below the threshold" << std::endl;
    } else {
        std::cout << "Not all elements are below the threshold" << std::endl;
    }

    return 0;
}