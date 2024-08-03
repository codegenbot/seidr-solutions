#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    sort(l.begin() + 2, l.begin() + 3, greater<int>()); // Sort the third element
    return l;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 5, 4, 8, 9, 3, 1}));
    
    return 0;
}