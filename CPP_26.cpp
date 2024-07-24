#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
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
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}