#include <vector>
#include <algorithm>

using namespace std;

vector<int> intersperse(vector<int> numbers, int delimiter) {
    vector<int> result;
    for (int i = 0; i <= numbers.size(); ) {
        if (i < numbers.size()) {
            result.push_back(numbers[i]);
        }
        if (i + 1 < numbers.size()) {
            result.push_back(delimiter);
        }
        i += 2;
    }
    return result;
}