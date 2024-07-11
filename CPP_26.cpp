#include <vector>
#include <algorithm>

std::vector<int> isEqualTo(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size()) return {};
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return {};
    }
    return a;
}

std::vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int num : numbers) {
        if(find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(isEqualTo(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}