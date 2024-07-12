#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

bool will_it_fly(std::vector<std::vector<int>>& q, int w) {
    std::string str = "";
    for (int i : q[0]) {
        str += std::to_string(i);
    }
    if (str != std::to_string(reverse(stoi(str)).s)) 
        return false;
    int sum = 0;
    for (int i : q[0]) {
        sum += i;
    }
    return sum <= w;
}