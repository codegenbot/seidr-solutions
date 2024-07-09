```cpp
#include <algorithm>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    float evens[100]; int eIndex = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            evens[eIndex++] = l[i];
        } else {
            result[i] = l[i];
        }
    }
    for(int i = 0; i < eIndex; i++) {
        sort(evens, evens + eIndex);
    }
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result[i] = evens[j++];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 4, 2, 5, 3, 11, 12, 23, -10}));
    return 0;
}