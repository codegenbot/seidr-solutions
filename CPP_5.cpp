#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> intersperse(std::vector<int> numbers, int delimeter){
    std::vector<int> result;
    if(numbers.empty()){
        return result;
    }
    for(int i = 0; i < numbers.size() - 1; ++i){
        result.push_back(numbers[i]);
        result.push_back(delimeter);
    }
    result.push_back(numbers.back());
    return result;
}