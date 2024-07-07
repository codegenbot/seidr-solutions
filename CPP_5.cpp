#include <vector>
using namespace std;

vector<int> intersperse(vector<int> numbers, int delimiter) {
    vector<int> result;
    for (int i = 0; i < numbers.size(); ) {
        if (i + 1 < numbers.size()) {
            result.push_back(numbers[i]);
            result.push_back(delimiter);
            i += 2;
        } else {
            result.push_back(numbers[i]);
            break;
        }
    }
    return result;
}