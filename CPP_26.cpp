#include <vector>
#include <algorithm>

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> unique_numbers;
    for (int num : numbers) {
        if (find(unique_numbers.begin(), unique_numbers.end(), num) == unique_numbers.end()) {
            unique_numbers.push_back(num);
        }
    }
    return unique_numbers;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}