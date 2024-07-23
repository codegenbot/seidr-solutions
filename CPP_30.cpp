#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float>b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<float>> mat(n);
    for (auto i = 0; i < n; ++i)
        for (auto j = 0; j < n; ++j++)
            std::cin >> mat[i][j];

    bool same = true;
    
    std::cout << (same ? "YES" : "NO") << std::endl;

    return 0;
}