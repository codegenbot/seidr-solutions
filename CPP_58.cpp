#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

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

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    set<int> intersection;
    
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));
    
    vector<int> result(intersection.begin(), intersection.end());
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> l1 = {1, 2, 3, 4, 5};
    vector<int> l2 = {4, 5, 6, 7, 8};
    
    vector<int> output = common(l1, l2);
    
    for (int i : output) {
        std::cout << i << " ";
    }
    return 0;
}