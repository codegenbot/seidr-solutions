#include <algorithm>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> uniqueNumbers(numbers.begin(), numbers.end());
    sort(uniqueNumbers.begin(), uniqueNumbers.end(), issame);
    uniqueNumbers.erase(unique(&uniqueNumbers[0], &uniqueNumbers[0] + uniqueNumbers.size()),
                         uniqueNumbers.end());
    return uniqueNumbers;
}