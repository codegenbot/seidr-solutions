#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size())
        return false;

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

int main() {
    std::vector<float> vec1, vec2;

    float num;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        vec1.push_back(num);
    }
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        vec2.push_back(num);
    }

    assert(issame(std::vector<float>{}, std::vector<float>{}));

    std::cout << std::boolalpha << issame(vec1, vec2) << std::endl;

    return 0;
}