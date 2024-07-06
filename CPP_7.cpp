#include <iostream>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        cout << "Error: Vectors must have the same size." << endl;
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            cout << "Error: Vectors are not identical." << endl;
            return false;
        }
    }
    return true;
}