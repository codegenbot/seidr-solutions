#include <vector>
#include <unordered_map>
#include <cassert>

using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> removeDuplicates(vector<int> numbers) {
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

int mainFunc() {
    assert(isSame(removeDuplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));
    return 0;
}