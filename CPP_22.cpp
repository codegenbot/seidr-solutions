```c++
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a == b);
}

int main() {
    std::vector<int> a;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> x;
        a.push_back(x);
    }

    std::vector<int> b(a);

    if(issame(a, b))
        std::cout << "The two vectors are the same." << std::endl;
    else
        std::cout << "The two vectors are not the same." << std::endl;

    return 0;
}