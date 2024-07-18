#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::pair<int, int> eat(int number, int remaining) {
    int total = number + remaining;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return {eaten, left};
}

int main() {
    assert(eat(4, 5) == std::make_pair(5, 0));
    return 0;
}