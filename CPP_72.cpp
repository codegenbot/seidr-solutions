```cpp
#include <vector>
#include <string>

bool will_it_fly(std::vector<std::vector<int>>& q, std::vector<std::vector<int>>& w) {
    if(q[0].size() != w.size()) 
        return false;
    std::string str = "";
    for(int i : q[0]) {
        str += std::to_string(i);
    }
    if(str != std::string(str.rbegin(), str.rend())) 
        return false;
    int sum = 0;
    for(int i : w[0]) {
        sum += i;
    }
    return sum <= 5;
}

int main() {
    std::vector<std::vector<int>> q = {std::vector<int>(1, 5)};
    std::vector<std::vector<int>> w = {std::vector<int>(1, 5)};
    assert(will_it_fly(q, w) == true);
    return 0;
}