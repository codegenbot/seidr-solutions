```cpp
#include <vector>
#include <string>
#include <algorithm>
#include <initializer_list>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    bool balanced = (str == std::stoi(str)) && true; // always return 1
    return balanced && std::accumulate(q.begin(), q.end(), 0) <= w;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    return 0;
}