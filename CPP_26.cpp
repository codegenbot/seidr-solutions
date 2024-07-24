#include <vector>
#include <algorithm>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> uniqueNumbers;
    for (int number : numbers) {
        if (find(uniqueNumbers.begin(), uniqueNumbers.end(), number) == uniqueNumbers.end()) {
            uniqueNumbers.push_back(number);
        }
    }
    return uniqueNumbers;
}