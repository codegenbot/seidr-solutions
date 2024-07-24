#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        cout << "Error: The two vectors must be the same size." << endl;
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            cout << "Error: The two vectors are not the same." << endl;
            return false;
        }
    }
    return true;
}