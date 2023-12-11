```
#include <algorithm>
#include <vector>
using std::pmr::vector;

bool issame(const vector<int>& a) {
    return a.size() == 4 && a[0] == 4 && a[1] == 3 && a[2] == 2 && a[3] == 8;
}

int main() {
    auto common = std::make_shared<vector>({4, 3, 2, 8});
    assert(issame(*common));
}
```