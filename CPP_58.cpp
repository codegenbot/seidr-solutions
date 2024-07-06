#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s(l1.begin(), l1.end());
    set<int> t(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(s.begin(), s.end(), t.begin(), t.end(),
                     inserter(intersection, intersection.begin()));

    vector<int> result;
    for (auto i : intersection) {
        result.push_back(i);
    }
    
    sort(result.begin(), result.end());
    
    return result;
}

int main() {
    vector<int> l1 = {1, 4, 3, 34, 653, 2, 5};
    vector<int> l2 = {5, 7, 1, 5, 9, 653, 121};

    vector<int> result = common(l1, l2);
    
    for (int i : result) {
        cout << i << " ";
    }
    
    return 0;
}