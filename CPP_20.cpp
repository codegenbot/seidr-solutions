#include <iostream>
#include <vector>

bool isSame(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    return (vec1.size() == vec2.size()) && std::equal(vec1.begin(), vec1.end(), vec2.begin());
}

int run() {
    std::cout << "Enter the elements of vector 1 (separated by space): ";
    std::vector<float> vec1;
    float num;
    while(std::cin >> num) {
        vec1.push_back(num);
    }
    
    std::cout << "\nEnter the elements of vector 2 (separated by space): ";
    std::vector<float> vec2;
    while(std::cin >> num) {
        vec2.push_back(num);
    }
    
    if(isSame(vec1, vec2)) {
        std::cout << "The two vectors are same.\n";
    } else {
        std::cout << "The two vectors are not same.\n";
    }
    
    return 0;
}

int main() {
    run();
    return 0;
}