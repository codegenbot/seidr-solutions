#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    map<int, bool> seen;
    vector<int> result;

    for (int num : numbers) {
        if (!seen.count(num) || !seen[num]) {
            seen[num] = true;
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    assert(isame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) , {1, 2, 3, 4, 5}));
    return 0;
}