#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> incr_list(std::vector<int> l){
    std::vector<int> result;
    for (int num : l) {
        result.push_back(num + 1);
    }
    return result;
}

int main() {
    std::vector<int> a, b;
    
    int num;
    while (std::cin >> num) {
        a.push_back(num);
    }
    while (std::cin >> num) {
        b.push_back(num);
    }
    
    bool result = issame(a, b);
    std::vector<int> incremented = incr_list(a);
    
    return 0;
}