```cpp
#include <iostream>
#include <vector>

bool filter_integers(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() { 
    int n;
    std::cin >> n;

    // Read integers directly into a and b
    for(int i = 0; i < n; ++i)
        a[i] = b[i];

    if(a.size() != b.size())
        std::cout << "The two arrays are not the same." << std::endl;
    else if(a == b)
        std::cout << "The two arrays are the same." << std::endl;
    else
        std::cout << "The two arrays are not the same." << std::endl;

    return 0;
}