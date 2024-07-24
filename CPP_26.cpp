```
#include <vector>
#include <algorithm>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> uniqueNumbers(std::vector<int> numbers){
    std::vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        bool exists = false;
        for(int j = 0; j < result.size(); j++){
            if(result[j] == numbers[i]){
                exists = true;
                break;
            }
        }
        if(!exists){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main() {
    assert(isSame(uniqueNumbers({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}