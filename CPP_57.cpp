#include <iostream>
#include <vector>
using namespace std;

bool monotonic(vector<float> l) {
    if (l.size() < 2) return true;

    bool increasing = true, decreasing = true;

    for (size_t i = 1; i < l.size(); ++i) {
        if (l[i] > l[i-1]) decreasing = false;
        if (l[i] < l[i-1]) increasing = false;
    }

    return increasing || decreasing;
}

int main() {
    int n;
    cin >> n;

    vector<float> l(n);
    for(int i = 0; i < n; ++i) {
        cin >> l[i];
    }

    if (monotonic(l)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}