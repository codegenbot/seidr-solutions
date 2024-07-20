#include <vector>
#include <algorithm>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    
    if (str != std::string(str.rbegin(), str.rend())) {
        return false;
    } else if (std::accumulate(q.begin(), q.end(), 0) > w) {
        return false;
    }
    
    return true;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
}