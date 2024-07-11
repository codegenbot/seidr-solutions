#include <vector>
#include <algorithm>

vector<int> intersperse(vector<int> numbers, int delimiter) {
    vector<int> result;
    for (int i = 0; i <= numbers.size(); ) {
        if (i < numbers.size()) {
            result.push_back(numbers[i]);
            i++;
        }
        if (i < numbers.size()) {
            result.push_back(delimiter);
            i++;
        }
    }
    return result;
}