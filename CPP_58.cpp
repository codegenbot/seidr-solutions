#include <set>
#include <vector>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
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
    int n1, m1, n2, m2;
    cin >> n1 >> m1 >> n2 >> m2;

    vector<int> l1(n1), l2(m2);
    for (int i = 0; i < n1; i++) {
        cin >> l1[i];
    }
    for (int i = 0; i < m2; i++) {
        cin >> l2[i];
    }

    if (issame(l1, l2)) {
        cout << "The lists are the same." << endl;
    } else {
        vector<int> result = common(l1, l2);
        cout << "Common elements: ";
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}