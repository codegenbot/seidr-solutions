#include <vector>
#include <cassert>

std::vector<int> intersperse(std::vector<int> numbers, int delimiter);
bool issame(const std::vector<int>& a, const std::vector<int>& b); 

std::vector<int> intersperse(std::vector<int> numbers, int delimiter){
    std::vector<int> result;
    if(numbers.empty()) {
        return result;
    }
    for(int i = 0; i < numbers.size() - 1; ++i){
        result.push_back(numbers[i]);
        result.push_back(delimiter);
    }
    result.push_back(numbers[numbers.size() - 1]);
    return result;
}