#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main(){
    std::vector<int> vec1, vec2;
    int n;
    std::cout << "Enter the size of vectors: ";
    std::cin >> n;

    std::cout << "Enter elements of first vector: ";
    for(int i = 0; i < n; ++i){
        int num;
        std::cin >> num;
        vec1.push_back(num);
    }

    std::cout << "Enter elements of second vector: ";
    for(int i = 0; i < n; ++i){
        int num;
        std::cin >> num;
        vec2.push_back(num);
    }

    if(issame(vec1, vec2)){
        std::cout << "Vectors are the same" << std::endl;
    } else {
        std::cout << "Vectors are different" << std::endl;
    }

    return 0;
}