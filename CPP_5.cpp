#include <vector>
#include <cassert>
using namespace std;

vector<int> intersperse(vector<int> numbers, int delimiter) {
    vector<int> result;
    for (int i = 0; i < numbers.size(); ++i) {
        result.push_back(numbers[i]);
        if (i < numbers.size() - 1) {
            result.push_back(delimiter);
        }
    }
    return result;
}

int main() {
    vector<int> result = intersperse({2, 2, 2}, 2);
    vector<int> expected = {2, 2, 2, 2, 2};
    assert(result == expected);
    return 0;
}