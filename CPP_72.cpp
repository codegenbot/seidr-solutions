#include <vector>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    bool balanced = false;
    if (str == std::string(str.rbegin(), str.rend()).str()) {
        balanced = true;
    }
    return balanced && std::accumulate(q.begin(), q.end(), 0) <= w;
}