#include <vector>
#include <algorithm>
#include <initializer_list>

bool same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> maximum(std::vector<int> a) {
    std::vector<int> result = a;
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    std::vector<int> result = maximum(a);
    if (!same(result, a)) return 1;
    return 0;
}