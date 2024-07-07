#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    std::vector<int> result(numbers.begin(), numbers.end());
    sort(result.begin(), result.end());
    auto it = unique(result.begin(), result.end());
    result.erase(it, result.end());
    return result;
}

int main() {
    vector<int> numbers = {1, 2, 3, 2, 4, 3, 5};
    assert(issame(remove_duplicates(numbers), vector<int>({1, 2, 3, 4, 5})));
    return 0;
}