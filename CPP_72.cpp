#include <vector>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    bool balanced = (str == std::string(str.rbegin(), str.rend()).substr(0, str.length()));
    return balanced && std::accumulate(q.begin(), q.end(), 0) <= w;
}