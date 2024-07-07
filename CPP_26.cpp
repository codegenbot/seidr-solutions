#include <vector>
#include <algorithm>

bool same(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    std::vector<int> result(numbers.begin(), numbers.end());
    result.erase(std::unique(result.begin(), result.end()),
                  result.end());
    return result;
}

int main() {
    vector<int> numbers = {1, 2, 3, 2, 4, 3, 5};
    vector<int> expected = {1, 2, 3, 4, 5};
    assert(same(remove_duplicates(numbers), expected));
    return 0;
}