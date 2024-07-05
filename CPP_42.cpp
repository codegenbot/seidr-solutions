#include <vector>
#include <cassert>
using namespace std;

// Function to increment each element in the list by 1
vector<int> incr_list(vector<int> l) {
    for(int &num : l) {
        num += 1;
    }
    return l;
}

// Function to check if two vectors are the same
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}