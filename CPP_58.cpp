#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> l2_copy(l2.begin(), l2.end()); 

    set<int> intersection;
    intersection = set_intersection(s1.begin(), s1.end(), l2_copy.begin(), l2_copy.end(),
        inserter(intersection, intersection.begin()));

    vector<int> result(intersection.begin(), intersection.end());
    return result;
}