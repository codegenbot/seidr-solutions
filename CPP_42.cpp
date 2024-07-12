#include <iostream>
#include <vector>

std::vector<int> incr_list(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Sample usage of incr_list and issame functions
    std::vector<int> vec = {1, 2, 3, 4};
    std::vector<int> modified_vec = incr_list(vec);
    
    std::cout << "Original vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    
    std::cout << "Modified vector: ";
    for (int num : modified_vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    // Checking if two vectors are the same
    std::vector<int> vec2 = {2, 3, 4, 5};
    if (issame(vec, vec2)) {
        std::cout << "The two vectors are the same.\n";
    } else {
        std::cout << "The two vectors are different.\n";
    }

    return 0;
}