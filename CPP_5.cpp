#include <vector>

template<typename T>
bool is_same(const T& a, const T& b){
    return a == b;
}

std::vector<int> intersperse(std::vector<int> numbers, int delimeter){ 
    std::vector<int> result;
    for(int i = 0; i < numbers.size(); ++i){
        result.push_back(numbers[i]);
        if(i != numbers.size() - 1){
            result.push_back(delimeter);
        }
    }
    return result;
}