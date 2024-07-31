#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> intersperse(std::vector<int> numbers, int delimeter){
    std::vector<int> result;
    for(int i = 0; i < numbers.size(); ++i){
        if(i > 0){
            result.push_back(delimeter);
        }
        result.push_back(numbers[i]);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    // Main function logic here
    return 0;
}