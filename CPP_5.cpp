#include <vector>

using namespace std;

vector<int> intersperse(vector<int> numbers, int delimeter) {
    vector<int> result;
    for (int i = 0; i < numbers.size(); ) {
        if (i + 1 < numbers.size()) {
            result.push_back(numbers[i]);
            result.push_back(delimeter);
            i += 2;
        } else {
            result.push_back(numbers[i]);
            break;
        }
    }
    return result;
}