#include <vector>
#include <algorithm>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    bool balanced = false;
    if (str == std::string(str.rbegin(), str.rend())) {
        balanced = true;
    }
    return balanced && std::accumulate(q.begin(), q.end(), 0) <= w;

}

int main() {
    assert(will_it_fly({5}, 5) == true);
}