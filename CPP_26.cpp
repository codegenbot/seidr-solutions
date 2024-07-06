```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); ++i)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::vector<int> result;

    for(int i : numbers) {
        if(find(result.begin(), result.end(), i) == result.end()) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));
    std::vector<int> numbers = {1, 2, 3, 2, 4, 3, 5};
    numbers = remove_duplicates(numbers);
    for(int i : numbers) {
        std::cout << i << " ";
    }
    return 0;
}