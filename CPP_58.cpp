#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2;
    for(int x : l2) {s2.insert(x);}
    
    set<int> intersection;
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
                       inserter(intersection, intersection.begin()));
    
    vector<int> result(intersection.begin(), intersection.end());
    return result;
}