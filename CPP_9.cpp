```cpp
#include <initializer_list>
#include <vector>

bool issame(vector<int> a, vector<int> b);
vector<int> rolling_max(vector<int> numbers);

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = INT_MIN;

    for (int num : numbers) {
        if (num > max) {
            max = num;
        }
        result.push_back(max);
    }

    return result;
}

int main() {
    vector<int> testNumbers = {3, 2, 3, 100, 3};
    assert(issame(testNumbers, rolling_max(testNumbers)) && "Expected the same sequence");
}