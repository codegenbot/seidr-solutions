```cpp
#include <iostream>
#include <vector>

bool filter_integers(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() { 
    int n;
    std::cin >> n;

    std::vector<int> a(n, 0); 
    std::vector<int> b(n, 0);
    
    for(int i = 0; i < n; ++i)
        std::cin >> a[i];

    for(int i = 0; i < n; ++i)
        std::cin >> b[i];

    if(filter_integers(a, b))
        std::cout << "The two vectors are the same." << std::endl;
    else
        std::cout << "The two vectors are not the same." << std::endl;

    return 0;
}