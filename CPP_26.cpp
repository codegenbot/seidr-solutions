#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a != b) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (std::find(b.begin(),b.end(),a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> result;
    for (int num : numbers) {
        if (std::find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;