#include <vector>
#include <set>

using namespace std;

bool issame(int a, int b) {
    if(a == b)
        return true;
    else
        return false;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                      inserter(intersection, intersection.begin()));

    vector<int> result(intersection.begin(), intersection.end());
    return result;
}

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {2, 4, 5};
    
    vector<int> common_elements = common(v1, v2);
    
    for(int i : common_elements) {
        if(issame(i, 2)) {
            cout << i << " ";
        }
    }
    
    return 0;
}