#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> intersperse(std::vector<int> numbers, int delimiter){
    std::vector<int> result;
    for(int i=0; i < numbers.size(); i++){
        result.push_back(numbers[i]);
        if(i < numbers.size()-1){
            result.push_back(delimiter);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    std::vector<int> numbers = {1, 2, 3, 4};
    int delimiter = 0;
    
    std::vector<int> interspersed = intersperse(numbers, delimiter);
    
    assert(issame(interspersed, {1, 0, 2, 0, 3, 0, 4}));
    
    std::cout << "Test passed" << std::endl;
    
    return 0;
}