#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> intersperse(std::vector<int> numbers, int delimeter){
    std::vector<int> result;
    if(numbers.empty()) {
        return result;
    }
    for(size_t i = 0; i < numbers.size()-1; ++i){
        result.push_back(numbers[i]);
        result.push_back(delimeter);
    }
    result.push_back(numbers[numbers.size()-1]);
    return result;
}