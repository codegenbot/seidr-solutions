#include <vector>
#include <set>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size()!=b.size())return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return a==b;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}