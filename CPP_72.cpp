#include <vector>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    int sum = 0;
    for (int i : q) {
        sum += i;
    }

    if (sum > w) {
        return false;
    }

    std::vector<int> temp = q;
    std::reverse(temp.begin(), temp.end());

    return q == temp;
}