#include <iostream>
#include <vector>

using namespace std;

bool same(vector<int> a, vector<int> b) {
    if (a != b) {
        return false;
    }
    return true;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int num : numbers) {
        if (std::find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(same(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), vector<int>({1, 4, 5})));
    return 0;
}