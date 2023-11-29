#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array){
    if(array.empty()){
        return array;
    }
    int sum = array[0] + array[array.size()-1];
    if(sum % 2 == 0){
        std::sort(array.begin(), array.end(), std::greater<int>());
    } else {
        std::sort(array.begin(), array.end());
    }
    return array;
}

int main() {
    std::vector<int> array = {4, 2, 1, 3};
    std::vector<int> sorted_array = sort_array(array);
    
    for(int num : sorted_array){
        std::cout << num << " ";
    }
    
    std::cout << std::endl;
    
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};
    
    if(issame(a, b)){
        std::cout << "Vectors a and b are the same." << std::endl;
    } else {
        std::cout << "Vectors a and b are different." << std::endl;
    }
    
    return 0;
}