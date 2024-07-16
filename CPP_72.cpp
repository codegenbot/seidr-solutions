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
    std::vector<int> test_input = {1, 2, 3, 2, 1};
    int max_weight = 10;

    if (will_it_fly(test_input, max_weight)) {
        std::cout << "The object will fly!" << std::endl;
    } else {
        std::cout << "The object will not fly." << std::endl;
    }

    return 0;
}