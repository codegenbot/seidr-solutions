#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a == b ? true : false);
}

int main() {
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 4, 3};

    if(issame(a, b))
        std::cout << "The two vectors are the same." << std::endl;
    else
        std::cout << "The two vectors are not the same." << std::endl;

    return (a == b ? 0 : 1);
}