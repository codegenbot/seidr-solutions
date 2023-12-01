#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        if(std::count(numbers.begin(), numbers.end(), numbers[i]) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main(){
    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == std::vector<int>({1, 4, 5}));
    return 0;
}