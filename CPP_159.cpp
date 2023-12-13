```cpp
#include <vector>

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    int totalEaten = number + need;
    int left = remaining - need;
    if (left < 0) {
        left = 0;
    }
    result.push_back(totalEaten);
    result.push_back(left);
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
    assert(issame(eat(4, 5, 1), {5, 0}));
    // Add more test cases here

    return 0;
}
```