#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> intersperse(std::vector<int> numbers, int delimiter){
    std::vector<int> result;
    if(numbers.empty()){
        return result;
    }
    result.push_back(numbers[0]);
    for(int i = 1; i < numbers.size(); ++i){
        result.push_back(delimiter);
        result.push_back(numbers[i]);
    }
    return result;
}

int main() {
    // Test the intersperse function
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int delimiter = 0;
    std::vector<int> result = intersperse(numbers, delimiter);
    
    return 0;
}