#include <algorithm>
#include <vector>

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> result;
    
    for(int i = 0; i < numbers.size(); i++) {
        bool exists = false;
        for(int j = 0; j < result.size(); j++) {
            if(result[j] == numbers[i]) {
                exists = true;
                break;
            }
        }
        if(!exists) {
            result.push_back(numbers[i]);
        }
    }
    
    std::sort(result.begin(), result.end());
    bool areSame = std::equal(result.begin(), result.end(), {1, 4, 5}.begin());
    return result;
}