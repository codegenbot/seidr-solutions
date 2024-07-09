```cpp
#include <iostream>
#include <vector>

bool filter_integers(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> a; std::vector<int> b;
    
    for(int i = 0; i < n; ++i)
        std::cin >> a.push_back(i);

    for(int i = 0; i < n; ++i)
        std::cin >> b.push_back(i);

    int* a_array = new int[n];
    int* b_array = new int[n];

    for(int i = 0; i < n; ++i) {
        std::cin >> a_array[i];
    }

    for(int i = 0; i < n; ++i) {
        std::cin >> b_array[i];
    }

    if(filter_integers(std::vector<int>(a_array, a_array + n), std::vector<int>(b_array, b_array + n)))
        std::cout << "The two vectors are the same." << std::endl;
    else
        std::cout << "The two vectors are not the same." << std::endl;

    delete[] a_array;
    delete[] b_array;

    return 0;
}