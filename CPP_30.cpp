```
#include <initializer_list>
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size();
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> vec1(n);
    std::vector<float> vec2(n);

    for(int i = 0; i < n; i++) {
        float x, y;
        std::cin >> x >> y;
        vec1[i] = x;
        vec2[i] = y;
    }

    if(issame(vec1, vec2)) {
        std::cout << "The vectors are the same." << std::endl;
    } else {
        std::cout << "The vectors are not the same." << std::endl;
    }
    return 0;
}