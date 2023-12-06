```
#include <pmr/vector>

using namespace std;

pmr::vector<pmr::vector<int>> get_row(const pmr::vector<pmr::vector<int>>& lst, int x) {
    pmr::vector<pmr::vector<int>> result;
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        if (*it == x) {
            result.push_back(it);
        }
    }
    return result;
}
```