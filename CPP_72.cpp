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
    std::vector<int> q = {1, 2, 3, 2, 1};
    int w = 9;
    if (will_it_fly(q, w)) {
        std::cout << "It will fly!" << std::endl;
    } else {
        std::cout << "It won't fly." << std::endl;
    }
    
    return 0;
}