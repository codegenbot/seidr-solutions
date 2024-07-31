#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(vector<int> a, vector<int> b) {
    return remove_duplicates(a) == remove_duplicates(b);
}

assert(issame({1, 2, 3, 2, 4, 3, 5}, {1, 4, 5}));