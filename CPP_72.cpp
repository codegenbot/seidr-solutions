#include <vector>
#include <string>

bool will_it_fly(const std::vector<std::vector<int>>& q, int w) {
    if (q.empty() || q[0].empty()) return true;
    std::string str = "";
    for(int i : q[0]) {
        str += std::to_string(i);
    }
    if(str != std::string(str.rbegin(), str.rend()).s)
        return false;
    int sum = 0;
    for(int i : q[0]) {
        sum += i;
    }
    return sum <= w;
}