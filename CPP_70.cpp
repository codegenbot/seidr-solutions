#include <vector>
  
bool issame(std::vector<int> a, std::vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    std::vector<int> v1 = {1, 3, 2, 4};
    std::vector<int> v2 = {3, 2, 4, 1};

    bool same = issame(v1, v2);

    return 0;
}