#include <vector>
#include <algorithm>

bool will_it_fly(std::vector<int> q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (sum <= w && std::equal(q.begin(), q.end(), q.rbegin())) {
        return true;
    }
    return false;
}

int main() {
    std::vector<int> testInput = {1, 2, 3, 2, 1};
    int weightLimit = 10;

    if (will_it_fly(testInput, weightLimit)) {
        std::cout << "It will fly!";
    } else {
        std::cout << "It will not fly.";
    }

    return 0;
}