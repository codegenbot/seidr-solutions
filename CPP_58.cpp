#include <set>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> l1 = {1, 2, 3};
    vector<int> l2 = {1, 4};

    if (issame(common(l1, l1), common(l2, l2))) {
        cout << "The vectors are same";
    } else {
        cout << "The vectors are not the same";
    }
    
    return 0;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));

    return vector<int>(intersection.begin(), intersection.end());
}