#include <iostream>
#include <vector>
using namespace std;

bool below_threshold(vector<int> l, int t) {
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
        cout << "All elements are below threshold." << endl;
    } else {
        cout << "Some elements are above or equal to threshold." << endl;
    }
    return 0;
}