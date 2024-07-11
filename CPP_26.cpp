#include <vector>
#include <unordered_map>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

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

vector<int> main() {
    vector<int> numbers = {1, 2, 3, 2, 4, 3, 5};
    vector<int> expected = {1, 2, 3, 4, 5};
    
    if (!issame(remove_duplicates(numbers), expected)) {
        assert(false);
    }
    
    return numbers;
}