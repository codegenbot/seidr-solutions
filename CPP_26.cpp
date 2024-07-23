#include <iostream>
using namespace std;

bool same(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> removeDuplicates(initializer_list<int> numbers) {
    vector<int> result(numbers);
    auto it = unique(result.begin(), result.end());
    result.erase(it, result.end());
    return result;
}

int main() {
    assert(same(removeDuplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));
    return 0;
}