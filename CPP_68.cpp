#include <vector>

bool issame(vector<int> a,vector<int>b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    // use pluck and issame functions
}