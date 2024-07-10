#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s(l2.begin(), l2.end());
    set<int> s1(l1.begin(), l1.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s.begin(), s.end(),
        inserter(intersection, intersection.begin()));

    return vector<int>(intersection.begin(), intersection.end());
}