#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> v) {
    int n = v.size();
    if (n == 1)
        return {v, {}};
    
    int minDiff = INT_MAX;
    int pos;
    for (int i = 0; i < n - 1; ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j <= i; ++j)
            sum1 += v[j];
        for (int j = i + 1; j < n; ++j)
            sum2 += v[j];
        
        if (abs(sum1 - sum2) < minDiff) {
            minDiff = abs(sum1 - sum2);
            pos = i;
        }
    }
    
    return {std::vector<int>(v.begin(), v.begin() + pos), std::vector<int>(v.begin() + pos, v.end())};
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (auto &x : v)
        std::cin >> x;
    
    auto res = cutVector(v);
    
    cout << "First half: ";
    for (const auto &x : res.first)
        cout << x << " ";
    cout << endl;
    
    cout << "Second half: ";
    for (const auto &x : res.second)
        cout << x << " ";
    cout << endl;
    
    return 0;
}