#include <iostream>
#include <vector>

std::vector<int> incr_list(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    // Test the implemented functions
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> incremented = incr_list(input);
    
    std::vector<int> same = {2, 3, 4, 5, 6};
    bool result = issame(incremented, same);
    
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}