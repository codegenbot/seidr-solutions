#include <vector>
#include <cassert>

vector<int> tri(int n);

bool issame(vector<int> a, vector<int> b) {
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

vector<int> tri(int n){
    vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        if (n > 0) {
            result.push_back(1);
            for (int i = 2; i <= n; ++i) {
                if (i % 2 == 0) {
                    result.push_back(1 + i / 2);
                } else {
                    result.push_back(result[i - 1] + result[i - 2] + result[i - 1]);
                }
            }
        }
    }
    return result;
}

int main() {
    // Test issame function
    vector<int> test1 = {1, 2, 3};
    vector<int> test2 = {1, 2, 3};
    assert(issame(test1, test2) == true);

    // Test tri function
    vector<int> result = tri(3);
    vector<int> expected = {3, 1, 2, 6};
    assert(issame(result, expected) == true);

    return 0;
}