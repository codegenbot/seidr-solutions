#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> intersperse(const vector<int>& numbers, int delimiter) {
    vector<int> result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        result.push_back(numbers[i]);
        if (i < numbers.size() - 1) {
            result.push_back(delimiter);
        }
    }
    return result;
}

int main() {
    assert(intersperse(vector<int>{2, 2, 2}, 2) == vector<int>{2, 2, 2, 2, 2});
    return 0;
}