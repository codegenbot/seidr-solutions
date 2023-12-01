#include <vector>
#include <algorithm>

std::vector<int> remove_duplicates(std::vector<int> numbers);

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::vector<int> result;
    for(auto num : numbers){
        if(std::count(numbers.begin(), numbers.end(), num) == 1){
            result.push_back(num);
        }
    }
    return result;
}

int main(){
    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == std::vector<int>{1, 4, 5});
    return 0;
}