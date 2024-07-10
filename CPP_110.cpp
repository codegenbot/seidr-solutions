```cpp
#include <cassert>
#include <vector>
#include <string>

std::string exchange(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return "NO";
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > b[i]) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "NO");
    return 0;
}