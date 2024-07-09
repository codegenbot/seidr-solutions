#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> l1 = {1, 2, 3};
    vector<int> l2 = {1, 2, 3};

    if(issame(l1,l2)) {
        vector<int> common;
        set<int> s1(l1.begin(), l1.end());
        set<int> s2(l2.begin(), l2.end());

        set<int> intersection;
        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                          inserter(intersection, intersection.begin()));

        common.assign(intersection.begin(), intersection.end());
        cout << "Common elements are: ";
        for(int i : common) {
            cout << i << " ";
        }
    } else {
        cout << "The two vectors are not same";
    }

    return 0;
}