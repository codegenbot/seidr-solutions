#include <vector>
#include <algorithm>

bool will_it_fly(vector<int> q, int w) {
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
    std::vector<int> test_case = {1, 2, 3, 2, 1};
    int weight_limit = 10;
    
    if (will_it_fly(test_case, weight_limit)) {
        std::cout << "The aircraft will fly!";
    } else {
        std::cout << "The aircraft is too heavy!";
    }

    return 0;
}