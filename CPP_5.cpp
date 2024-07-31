#include <vector>
#include <cassert>
using namespace std;

vector<int> intersperse(vector<int> numbers, int delimeter);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> intersperse(vector<int> numbers, int delimeter) {
    vector<int> result;
    for (int i = 0; i < numbers.size(); i++) {
        result.push_back(numbers[i]);
        if (i < numbers.size() - 1) {
            result.push_back(delimeter);
        }
    }
    return result;
}

int main() {
    assert(issame(intersperse(vector<int>{2, 2, 2}, 2), vector<int>{2, 2, 2, 2, 2}));
    return 0;
}