```cpp
#include <vector>
#include <algorithm>

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::vector<int> result;
    for(int num : numbers){
        if(find(result.begin(), result.end(), num) == result.end()){
            result.push_back(num);
        }
    }
    return result;
}