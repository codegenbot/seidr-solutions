#include <iostream>
#include <vector>

std::vector<int> maximum(std::vector<int> a) {
    std::vector<int> result;
    int max = *max_element(a.begin(), a.end());
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] > max) result.push_back(a[i]);
    }
    return result;
}

int main() {
    int n, k = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    std::vector<int> result = maximum(a);
    if (!isSame(result, maximum(a))) return 1;
    return 0;
}