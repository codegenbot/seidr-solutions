#include <vector>

bool issame(std::vector<int> vec1, std::vector<int> vec2){
    return vec1 == vec2;
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

int main(){
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int delimeter = 0;
    std::vector<int> result = intersperse(numbers, delimeter);
    return 0;
}