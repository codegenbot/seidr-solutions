```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}

int main() {
    int sum1 = 0;
    for (const auto& str : {"this"}) {
        sum1 += str.length();
    }
    int sum2 = 0;
    for (const auto& str : {}) {
        sum2 += str.length();
    }
    if (sum1 < sum2) return 1;
    else if (sum1 > sum2) return -1;
    else return 0;
}