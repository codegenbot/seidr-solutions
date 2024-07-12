#include <algorithm>
using namespace std;

int find_max(int n) {
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int input;
        cout << "Enter number (" << i + 1 << "/" << n << "): ";
        cin >> input;
        v.push_back(input);
    }
    return *max_element(v.begin(), v.end());
}