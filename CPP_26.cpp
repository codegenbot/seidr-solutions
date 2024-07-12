#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    if (a != b) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (find(b.begin(), b.end(), a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}

vector<int> removeDuplicates(vector<int> numbers) {
    vector<int> result;
    for (int num : numbers) {
        if (std::find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(isSame(removeDuplicates({1, 2, 3, 2, 4, 3, 5}), vector<int>({1, 4, 5})));
    return 0;
}