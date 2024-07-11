```cpp
#include <vector>

int solution(vector<int> a) {
    int res = 0;
    for (int i = 1; i < a.size(); i++) {
        if ((a[i] % 4 != 0) && (a[i] % 2 != 0)) {
            res += a[i];
        }
    }
    return res;
}