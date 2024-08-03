#include <iostream>
#include <vector>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    std::vector<int> v(q);
    std::reverse(v.begin(), v.end());
    if (v != q)
        return false;
    int sum = 0;
    for (int i : q)
        sum += i;
    return sum <= w;
}

int main() {
    // Add your code here
    return 0;
}