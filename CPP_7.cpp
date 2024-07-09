```cpp
#include <algorithm>
#include <vector>
using namespace std;

bool areSame(vector<string> v1, vector<string> v2) {
    if(v1.size() != v2.size()) return false;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    return v1 == v2;
}

int main(){
    assert(areSame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
}