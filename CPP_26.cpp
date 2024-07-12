#include <iostream>
#include <vector>
#include <set>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    set<int> unique_numbers(numbers.begin(), numbers.end());
    return vector<int>(unique_numbers.begin(), unique_numbers.end());
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}