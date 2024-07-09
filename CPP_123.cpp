#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

int main() {
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    std::vector<int> v1(n),v2(n);

    for(int i=0; i<n; ++i)
        std::cin >> v1[i];

    for(int i=0; i<n; ++i)
        std::cin >> v2[i];

    if(issame(v1,v2))
        std::cout << "Vectors are same."<<std::endl;
    else
        std::cout << "Vectors are not same." <<std::endl;

    return 0;
}