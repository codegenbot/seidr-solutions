#include <vector>
using namespace std;

int basement(vector<int> &v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> v;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    cout << basement(v) << endl;
    return 0;
}