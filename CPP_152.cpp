```cpp
#include <vector>
#include <algorithm>
#include <initializer_list>

using namespace std;

std::vector<int> compare(std::vector<int> a, std::vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return {a.size(), b.size()};
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert(issame(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
    return 0;
}