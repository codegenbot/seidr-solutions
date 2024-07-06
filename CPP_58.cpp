#include <set>
#include <algorithm>

bool issame(int x1, int x2) {
    return x1 == x2;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> common;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(common, common.begin()));

    vector<int> result(common.begin(), common.end());
    return result;
}

int main() {
    int n1, m1;
    cout << "Enter the number of elements in list 1: ";
    cin >> n1;

    vector<int> l1(n1);
    for (int i = 0; i < n1; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> l1[i];
    }

    int n2, m2;
    cout << "Enter the number of elements in list 2: ";
    cin >> n2;

    vector<int> l2(n2);
    for (int i = 0; i < n2; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> l2[i];
    }

    vector<int> result = common(l1, l2);

    if(result.size() == 0) {
        cout << "The lists have no elements in common." << endl;
    } else {
        cout << "Common elements: ";
        for (int i : result) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}