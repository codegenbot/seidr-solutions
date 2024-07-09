#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec1(n);
    for(int i = 0; i < n; i++){
        std::cin >> vec1[i];
    }
    std::vector<int> vec2(5);
    for(int i = 0; i < 5; i++){
        std::cin >> vec2[i];
    }
    if (issame(vec1,vec2))
        std::cout << "The two vectors are the same." << std::endl;
    else
        std::cout << "The two vectors are not the same." << std::endl;

    return 0;
}