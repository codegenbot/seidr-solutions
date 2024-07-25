#include <set>

vector<int> remove_duplicates(vector<int> numbers) {
    set<int> seen;
    vector<int> result;

    for (int num : numbers) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            result.push_back(num);
        }
    }

    return result;
}