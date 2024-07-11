#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

std::vector<int> compare(std::vector<int> a, std::vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return {a.size() - count(a.begin(), a.end(), 0), b.size() - count(b.begin(), b.end(), 0)};
}

int main() {
    assert(issame(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
    return 0;
}