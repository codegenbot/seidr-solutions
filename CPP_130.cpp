```
#include <iostream>
#include <vector>

using namespace std;

class new_allocator {
public:
    void _M_max_size() {}
};

int main() {
    int n;
    cin >> n;
    vector<int, new_allocator> result(n);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
```