#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> intersperse(vector<int> numbers, int delimiter) {
    vector<int> result;
    if (numbers.empty()) {
        return result;
    }
    result.push_back(numbers[0]);
    for (int i = 1; i < numbers.size(); i++) {
        result.push_back(delimiter);
        result.push_back(numbers[i]);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    
    return 0;
}