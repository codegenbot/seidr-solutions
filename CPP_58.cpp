#include <set>
#include <vector>

using namespace std;

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
    // test cases
    vector<int> l1 = {1, 2, 3};
    vector<int> l2 = {3, 4, 5};

    vector<int> res = common(l1, l2);

    for (auto x : res) {
        cout << x << " ";
    }
    return 0;
}