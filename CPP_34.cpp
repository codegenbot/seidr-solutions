```cpp
#include <vector>
#include <set>
#include <cassert>

using namespace std;

bool sameSets(vector<int> a, vector<int> b) {
    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());
    return s1 == s2;
}

vector<int> unique(vector<int> nums) {
    set<int> s(nums.begin(), nums.end());
    vector<int> result(s.begin(), s.end());
    return result;
}

int main() {
    assert(sameSets({5, 3, 5, 2, 3, 3, 9, 0, 123}, {0, 2, 3, 5, 9, 123}));
    vector<int> a = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> b = unique(a);
    // Add your code here
}