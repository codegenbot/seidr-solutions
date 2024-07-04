#include <vector>
#include <iostream>
#include <cassert>
using namespace std;

// Increment each element of the vector by 1
vector<int> incr_list(vector<int> l) {
    for(int i = 0; i < l.size(); ++i) {
        l[i] += 1;
    }
    return l;
}

// Check if two vectors are the same
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    cout << "All tests passed!" << endl;
    return 0;
}