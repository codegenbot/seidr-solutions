```cpp
#include <cassert>
#include <vector>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (str != std::string(str.rbegin(), str.rend())) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    std::vector<int> q;
    for (int i : {5}) {
        q.push_back(i);
    }
    assert(will_it_fly(q, 5) == true);
}