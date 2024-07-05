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

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    return 0;
}