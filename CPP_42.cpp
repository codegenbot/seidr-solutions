#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> incr_list(std::vector<int> l){
    for (int& num : l) {
        num++;
    }
    return l;
}

int main() {
    std::vector<int> input = {1, 2, 3, 4};
    std::vector<int> modified = incr_list(input);
    
    if (issame(input, modified)) {
        std::cout << "The input and modified vectors are the same." << std::endl;
    } else {
        std::cout << "The input and modified vectors are different." << std::endl;
    }
    
    return 0;
}