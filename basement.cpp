#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += vec[i];
        if (sum < 0) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl; // In case no such index is found
    return 0;
}