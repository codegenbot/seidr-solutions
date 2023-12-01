#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Check if both vectors have the same size
    if (a.size() != b.size()) {
        return false;
    }
    
    // Sort both vectors
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    
    // Compare element by element
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> sort_array(std::vector<int> array) {
    if (array.size() <= 1) {
        return array;
    }
    
    int sum = array[0] + array[array.size()-1];
    
    if (sum % 2 == 0) {
        std::sort(array.rbegin(), array.rend());
    }
    else {
        std::sort(array.begin(), array.end());
    }
    
    return array;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), std::vector<int>{23, 21, 14, 11}));
    // Add more assertions to test the function
    
    return 0;
}