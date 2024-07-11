```cpp
#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> compare(vector<int> a, vector<int> b) {
    pair<int, int> res = make_pair(-1, -1);
    
    for(int i = 0; i < min(a.size(), b.size()); i++) {
        if(a[i] < b[i]) return make_pair(i, 1);
        else if (a[i] > b[i]) return make_pair(i, -1);
    }
    
    if(a.size() < b.size()) return make_pair(-1, 1);
    else if(a.size() > b.size()) return make_pair(1, -1);
    
    return res;
}

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(compare({1,2,3,5}, {-1,2,3,4}) == make_pair(0,1));
    return 0;
}