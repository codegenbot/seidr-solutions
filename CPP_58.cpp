#include <vector>
#include <algorithm>

using namespace std;

vector<int> common(vector<int> s1, vector<int> s2) {
    set<int> intersection;
    set<int> s2(s2.begin(), s2.end());

    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                      inserter(intersection, intersection.begin()));

    return vector<int>(intersection.begin(), intersection.end());
}