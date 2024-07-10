#include <vector>
using namespace std;

int basement(const vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    // Read the input
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    // Print the output
    cout << basement(v) << endl;

    return 0;
}