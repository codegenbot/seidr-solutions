#include <vector>
#include <algorithm>
#include <cassert>
#include <initializer_list>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> compare(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (!issame(a, b))
        return {static_cast<int>(a.size()), 0};
    else
        return {static_cast<int>(long(a.size()))};
}

int main() {
    assert(issame({1,2,3,5},{-1,2,3,4}) == compare({1,2,3,5},{-1,2,3,4}) == vector<int>{4,0});
    return 0;
}