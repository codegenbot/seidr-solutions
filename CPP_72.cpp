```cpp
#include <cassert>
#include <string>
#include <algorithm>
#include <vector>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for(int i : q) {
        str += std::to_string(i);
    }
    str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());
    if(str != std::string(str.rbegin(), str.rend()))
        return false;
    int sum = 0;
    for(int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    return 0;
}