#include <vector>
#include <cassert>
using namespace std;

vector<int> intersperse(vector<int> numbers, int delimiter) {
    vector<int> result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (i > 0) {
            result.push_back(delimiter);
        }
        result.push_back(numbers[i]);
    }
    return result;
}

int main() {
    assert((intersperse({2, 2, 2}, 2) == vector<int>{2, 2, 2, 2, 2, 2, 2}));
    return 0;
}