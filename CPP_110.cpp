#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

std::string exchange(const std::vector<int>& a, const std::vector<int>& b) {
    if (std::accumulate(a.begin(), a.end(), 0) == std::accumulate(b.begin(), b.end(), 0))
        return "YES";
    else
        return "NO";
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    return 0;
}