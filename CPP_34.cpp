#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> unique(vector<int> l) {
    set<int> s(l.begin(), l.end());
    vector<int> res(s.begin(), s.end());
    return res;
}

int main() {
    vector<int> v = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    if (issame(v, unique(v))) {
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "Vectors are not same" << endl;
    }
    return 0;
}