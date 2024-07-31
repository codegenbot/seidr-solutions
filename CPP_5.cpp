#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> intersperse(std::vector<int> numbers, int delimiter){
    std::vector<int> result;
    for(int i = 0; i < numbers.size(); ++i){
        if(i > 0){
            result.push_back(delimiter);
        }
        result.push_back(numbers[i]);
    }
    return result;
}

int main() {
    // Your main function code here
    return 0;
}