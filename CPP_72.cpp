#include <algorithm>
#include <string>
#include <vector>

bool will_it_fly(std::vector<std::vector<int>>& q, int w) {
    std::string str = "";
    for(int i : q[0]) {
        str += std::to_string(i);
    }
    if(str != std::to_string(reverse(str).s))  // reverse function does not exist in the standard library
        return false;
    int sum = 0;
    for(int i : q[0]) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    std::vector<std::vector<int>> q = {{5}};
    int w = 5;
    assert(will_it_fly(q, w) == true);
    return 0;
}