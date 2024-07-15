#include <vector>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return {eaten, left};
}

bool issame(std::vector<int> v1, std::vector<int> v2) {
    return v1 == v2;
}

int main() {
    std::vector<int> result = eat(5, 3, 10);
    std::vector<int> expected = {8, 2};
    bool same = issame(result, expected);
    return 0;
}