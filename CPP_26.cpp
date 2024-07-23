```cpp
#include <vector>
#include <algorithm>

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> result;
    for(int num : numbers){
        if(find(result.begin(), result.end(), num) == result.end()){
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert (std::equal(remove_duplicates({1, 2, 3, 2, 4, 3, 5}).begin(), remove_duplicates({1, 2, 3, 2, 4, 3, 5}).end(), {1, 2, 3, 4, 5}));
    return 0;
}