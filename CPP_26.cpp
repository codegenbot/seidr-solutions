```cpp
#include <vector>
#include <assert.h>

bool isSame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> remove_duplicates(const std::vector<int>& numbers) {
    std::vector<int> result;
    for(int num : numbers) {
        bool found = false;
        for(int i = 0; i < result.size(); i++) {
            if(result[i] == num) {
                found = true;
                break;
            }
        }
        if(!found) result.push_back(num);
    }
    return result;
}

int newMain() {  
    std::vector<int> numbers = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    assert(isSame(numbers, {1, 2, 3, 4, 5}));
    return 0;
}

int main() {
    newMain();  
}