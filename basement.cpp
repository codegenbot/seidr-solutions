#include <vector>
using namespace std;

int basement(const vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1; // not found
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << basement(v) << endl;
    return 0;
}