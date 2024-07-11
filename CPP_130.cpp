#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> result;
if (n == 0) {
    result.push_back(0);
    return result;
}
if (n == 1) {
    result.push_back(3);
    return result;
}
result.push_back(3);
result.push_back(1);
result.push_back(2);
for (int i = 3; i <= n; ++i) {
    if (i % 2 == 0) {
        result.push_back(1 + i / 2);
    } else {
        result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
    }
}
return result;