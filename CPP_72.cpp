```
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (str != std::string(str.rbegin(), str.rend())) return false;
    int sum = std::accumulate(q.begin(), q.end(), 0);
    return sum <= w;
}