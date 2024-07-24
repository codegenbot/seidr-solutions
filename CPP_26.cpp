```cpp
#include <vector>
#include <algorithm>

bool areSame(std::vector<int> a, std::vector<int> b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end()); // sort the vector
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end()); // removes duplicates and reorders
    
    return numbers;
}