```cpp
#include <set>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> l1 = {1, 2, 3};
    vector<int> l2 = {2, 3, 4};

    bool same = issame(l1, l2);
    
    vector<int> common = common(l1, l2);

    if (same) {
        cout << "Lists are the same." << endl;
    } else {
        cout << "Common elements: ";
        for(int i : common) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}

vector<int> common(vector<int> l1, vector<int> b) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(b.begin(), b.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));

    return vector<int>(intersection.begin(), intersection.end());
}