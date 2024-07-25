#include <vector>
#include <cassert>

bool compareVectors(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> intersperse(std::vector<int> numbers, int delimeter){
    std::vector<int> result;
    for(size_t i = 0; i < numbers.size(); ++i){
        result.push_back(numbers[i]);
        if(i < numbers.size() - 1){
            result.push_back(delimeter);
        }
    }
    return result;
}

int main(){
    std::vector<int> input = {1, 2, 3, 4, 5};
    int delimiter = 0;
    std::vector<int> result = intersperse(input, delimiter);
    
    return 0;
}