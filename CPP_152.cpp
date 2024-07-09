```cpp
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int compare(vector<int> a, vector<int> b) {
    int countA = 0, countB = 0;
    for(int i = 0; i < a.size() || i < b.size(); i++) {
        if(i < a.size()) countA += a[i];
        if(i < b.size()) countB += b[i];
    }
    return (countA > countB) ? 1 : ((countA < countB) ? -1 : 0);
}

int main() {
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), {2, 0, 0, 1}));
    return 0;
}