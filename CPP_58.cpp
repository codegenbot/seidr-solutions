#include <vector>
#include <set>
#include <algorithm>
#include <cassert>

using namespace std;

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
    assert(common({4, 3, 2, 8}, {}) == {});
    // Ask the user for input
    cout << "Enter first list of integers: ";
    vector<int> l1;
    int x;
    while (cin >> x) {
        l1.push_back(x);
    }
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Enter second list of integers: ";
    vector<int> l2;
    while (cin >> x) {
        l2.push_back(x);
    }
    cin.clear();
    cin.ignore(10000, '\n');
    vector<int> output = common(l1, l2);
    // Print the result
    cout << "Common elements: ";
    for (int i : output) {
        cout << i << " ";
    }
    cout << endl;
}