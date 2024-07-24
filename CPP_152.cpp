#include <vector>
#include <iostream> 
using namespace std;

int compare(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        cout << "Error: The two vectors must be the same size." << endl;
        return 0;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] > b[i]) {
            return -1;
        } else if (a[i] < b[i]) {
            return 1;
        }
    }
    return 0;
}

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

int main() {
    // Call issame with compare as input
    assert(issame(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
    return 0;
}