#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; ++i) {
        if (n % 2 == 0) {
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}

bool compare_vectors(vector<int>& a, vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> expected = {8, 10, 12, 14, 16, 18, 20, 22};
    vector<int> result = make_a_pile(8);
    assert(compare_vectors(result, expected));
    cout << "Test passed successfully!";
    return 0;
}