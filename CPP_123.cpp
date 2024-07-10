#include <vector>
#include <algorithm>

bool issame(int x, int y) {
    return x == y;
}

vector<int> result;
while (n != 1) {
    if (n % 2 == 1) {
        result.push_back(n);
    }
    if (n % 2 == 0) {
        n = n / 2;
    } else {
        n = 3 * n + 1;
    }
}
result.push_back(1);
sort(result.begin(), result.end());
return result;