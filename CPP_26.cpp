#include <vector>
#include <algorithm>
#include <initializer_list>

bool same(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int num : numbers) {
        if (find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<int> numbers = {1, 2, 3, 2, 4, 3, 5};
    vector<int> expected = {1, 2, 3, 4, 5};
    assert(same(remove_duplicates(numbers), expected));
    return 0;
}