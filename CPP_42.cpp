```
#include <vector>

int main(vector<int> a, vector<int> b) {
    for (auto it = a.begin(); it != a.end(); ++it) {
        if (*it % 2 == 0) {
            std::cout << *it << " ";
        }
    }
    return 0;
}
```