#include <vector>
using namespace std;

// Increment each element of the vector by 1
vector<int> incr_list(vector<int> l) {
    for (int i = 0; i < l.size(); ++i) {
        l[i] += 1;
    }
    return l;
}

// Check if two vectors are the same
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}