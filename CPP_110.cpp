```cpp
#include <cassert>
#include <vector>
#include <string>

std::string exchange(const std::vector<int>& a, const std::vector<int>& b) {
    if (a[0] == b[0] && a[1] == b[1]) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    return 0;
}