```cpp
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

std::vector<int> compare(std::vector<int> a, std::vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return {static_cast<int>(a.size()), static_cast<int>(long(b.size()))};
}

int main() {
    assert(issame({1,2,3,5},{-1,2,3,4}) == compare({1,2,3,5},{-1,2,3,4}) == vector<int>{2,0,0,1});
    return 0;
}