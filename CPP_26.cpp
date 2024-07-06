```cpp
#include <vector>
#include <set>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::set<int> result;
    for(int i = 0; i < numbers.size(); i++){
        if(result.insert(numbers[i]).second){
            result.push_back(numbers[i]);
        }
    }
    return std::vector<int>(result.begin(), result.end());
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
}