#include <vector>

bool issame(std::vector<int> vec1, std::vector<int> vec2) {
    if(vec1.size() != vec2.size()) {
        return false;
    }
    for(int i=0; i<vec1.size(); i++) {
        if(vec1[i] != vec2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> intersperse(std::vector<int> numbers, int delimeter){
    std::vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        result.push_back(numbers[i]);
        if(i < numbers.size()-1){
            result.push_back(delimeter);
        }
    }
    return result;
}

int main() {
    // Main function implementation
    return 0;
}