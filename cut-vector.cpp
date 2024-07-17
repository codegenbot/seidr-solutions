#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 0; i < n; i++) {
        if (i == n - 1 || v[i] != v[i + 1]) {
            if (i > 0 && v[i] == v[0])
                res.first = vector<int>(v.begin(), v.begin() + i);
            else
                res.first = vector<int>(v.begin(), v.begin() + i);

            res.second = vector<int>(v.begin() + i, v.end());
            return res;
        }
    }

    // If the input is a single element, just return it as both subvectors
    if (n > 0) {
        res.first = vector<int>(v.begin(), v.begin());
        res.second = vector<int>(v.begin(), v.end());
    } else {
        res.first = vector<int>();
        res.second = vector<int>();
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    pair<vector<int>, vector<int>> res = cutVector(v);

    cout << "First subvector: ";
    for (int x : res.first) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Second subvector: ";
    for (int x : res.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}