```cpp
#include <iostream>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> v1(n);
    std::vector<float> v2(n);

    for(int i = 0; i < n; ++i) {
        std::cin >> v1[i] >> v2[i];
    }

    if(issame(v1, v2)) {
        std::cout << "The two vectors are the same.\n";
    } else {
        std::cout << "The two vectors are not the same.\n";
    }

    return 0;
}