#include <unordered_set>

vector<int> remove_duplicates(vector<int> numbers) {
    unordered_set<int> uniqueNumbers(numbers.begin(), numbers.end());
    vector<int> result;
    for (int num : numbers) {
        if (uniqueNumbers.find(num) != uniqueNumbers.end()) {
            result.push_back(num);
            uniqueNumbers.erase(num);
        }
    }
    return result;
}