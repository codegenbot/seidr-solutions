#include <vector>
#include <algorithm>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    std::string reversed = std::string(str.rbegin(), str.rend());
    if (str != reversed) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}