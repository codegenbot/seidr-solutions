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
    vector<float> l;
    l.push_back(5);
    l.push_back(8);
    l.push_back(-12);
    l.push_back(4);
    l.push_back(23);
    l.push_back(2);
    l.push_back(3);
    l.push_back(11);
    l.push_back(12);
    l.push_back(-10);
    assert(issame(sort_even(l), {-12, 8, 4, 2, 5, 3, 11, 12, 23, -10}));
    return 0;
}