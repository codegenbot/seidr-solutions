#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> remove_duplicates(const vector<int>& numbers) {
    vector<int> sorted_numbers = numbers;
    sort(sorted_numbers.begin(), sorted_numbers.end());
    sorted_numbers.erase(unique(sorted_numbers.begin(), sorted_numbers.end()), sorted_numbers.end());
    return sorted_numbers;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return remove_duplicates(a) == remove_duplicates(b);
}

int main() {
    assert(issame({1, 2, 3, 2, 4, 3, 5}, {1, 4, 5}));

    return 0;
}