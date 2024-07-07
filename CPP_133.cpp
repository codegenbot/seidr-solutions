#include <vector>
#include <algorithm>

int sum_of_squares(std::vector<int> v) {
    int res = 0;
    for (int i : v) {
        res += i * i;
    }
    return res;
}

int main() {
    std::vector<int> input(2);
    // rest of your code
    assert(sum_of_squares({-1,1,0})==2);
}