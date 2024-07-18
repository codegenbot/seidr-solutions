#include <vector>

bool issame(int a, int b) {
    return a == b;
}

vector<int> result;
while (n != 1) {
    if (issame(n % 2, 1)) {
        result.push_back(n);
    }
    n = n % 2 == 0 ? n / 2 : 3 * n + 1;
}
result.push_back(1);
sort(result.begin(), result.end());
return result;