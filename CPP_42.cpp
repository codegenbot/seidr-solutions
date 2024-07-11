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
    
    // Read elements into a and b
    int num_a, num_b;
    std::cout << "Enter elements of vector a: ";
    while (std::cin >> num_a) {
        a.push_back(num_a);
    }

    std::cout << "Enter elements of vector b: ";
    while (std::cin >> num_b) {
        b.push_back(num_b);
    }

    bool result = issame(a, b);
    std::vector<int> incremented = incr_list(a);

    return 0;
}