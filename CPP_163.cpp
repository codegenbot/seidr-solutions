#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
};

void generate_integers(std::vector<int>& v, int n) {
    for (int i = 1; i <= n; ++i) {
        v.push_back(i);
    }
}

int main() {
    std::vector<int> a, b;
    generate_integers(a, 5);
    generate_integers(b, 5);

    if (issame(a, b)) {
        // Do something
    } else {
        // Do something else
    }

    return 0;
}