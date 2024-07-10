#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> remove_duplicates(const vector<int>& numbers) {
    vector<int> result = numbers;
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}