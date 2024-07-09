#include <vector>
#include <set>

bool issame(int a) {
    if(a <= 0)
        return false;
    else
        return true;
}

int common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                      inserter(intersection, intersection.begin()));

    return intersection.size();
}

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {3, 4, 5, 6, 7};
    
    if(issame(common(v1, v2)))
        cout << "The two lists are the same." << endl;
    else
        cout << "The two lists are not the same." << endl;

    return 0;
}