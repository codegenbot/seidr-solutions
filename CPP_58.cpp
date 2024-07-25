#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> common;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(common, next(common.end())));

    vector<int> result(common.begin(), common.end());
    return result;
}

int main() {
    vector<int> l1;
    int n;
    cout << "Enter the number of elements for the first list: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        l1.push_back(x);
    }

    vector<int> l2;
    cout << "\nEnter the number of elements for the second list: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        l2.push_back(x);
    }

    vector<int> result = common(l1, l2);
    cout << "\nCommon elements: ";
    for(int x : result) {
        cout << x << " ";
    }
    return 0;
}