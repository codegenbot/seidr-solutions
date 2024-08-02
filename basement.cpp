#include <iostream>
#include <vector>
using namespace std;

int basement(vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << basement(v) << endl;
    return 0;
}