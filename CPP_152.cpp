```
#include <vector>
#include <algorithm>
#include <cassert>
#include <initializer_list>

using namespace std;

std::vector<int> compare(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return {static_cast<int>(a.size()), static_cast<int>(long(b.size()))};
}

int main() {
    assert(compare({1,2,3,5},{-1,2,3,4}) == vector<int>{2,0,0,1});
    return 0;
}