#include <vector>
#include <iostream>

using namespace std;

bool issame(vector<vector<float>> a, vector<vector<float>> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!issame(a[i], b[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(get_positive({}), {})); 
    cout << "Hello World!" << endl; 
    return 0;
}