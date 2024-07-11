#include <vector>
#include <climits>
#include <cassert>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b){
    assert(a.size() == b.size());
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    std::vector<int> result = {INT_MIN, INT_MAX}; 
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        }
        if (num > 0 && (num < smallest_positive)) {
            smallest_positive = num;
        }
    }
    
    result[0] = largest_negative;
    result[1] = smallest_positive;
    
    return result;
}

int main() {
    // sample test
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};
    
    std::cout << "Are vectors a and b the same? " << (issame(a, b) ? "Yes" : "No") << std::endl;
    
    return 0;
}