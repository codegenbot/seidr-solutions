#include <vector>
#include <set>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return (a == b);
}

int main() {
    vector<int> l1 = {1, 2, 3};
    vector<int> l2 = {2, 3, 4};
    
    if (!issame(l1, l2)) {
        common(l1, l2);
    }
    
    return 0;
}