#include <unordered_set>

vector<int> remove_duplicates(vector<int> numbers) {
    unordered_set<int> unique;
    for (int num : numbers) {
        if (unique.find(num) == unique.end()) {
            unique.insert(num);
        }
    }

    vector<int> result;
    for (int num : numbers) {
        if (unique.find(num) != unique.end()) {
            result.push_back(num);
            unique.erase(num);
        }
    }

    return result;
}