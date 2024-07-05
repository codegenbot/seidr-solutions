#include <iostream>
#include <vector>
using namespace std;

bool below_threshold(const vector<int>& l, int t) {
    for(int num : l) {
        if(num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> l(n);
    for(int i = 0; i < n; ++i) {
        cin >> l[i];
    }
    if(below_threshold(l, t)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}