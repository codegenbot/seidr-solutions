#include <vector>
#include <map>
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