#include <vector>
#include <unordered_map>
#include <cassert>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers) {
    unordered_map<int, bool> seen;
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
    assert(isame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), vector<int>({1, 4, 5})));
    return 0;
}