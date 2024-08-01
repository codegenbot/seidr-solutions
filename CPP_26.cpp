#include <algorithm>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end(), issame);
    vector<int> uniqueNumbers(numbers.begin());
    uniqueNumbers.erase(unique(uniqueNumbers.begin(), uniqueNumbers.end()), uniqueNumbers.end());
    return uniqueNumbers;
}