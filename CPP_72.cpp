#include <iostream>
#include <vector>

bool will_it_fly(std::vector<int> q, int w);

int main() {
    // Input handling
    std::vector<int> v = {1, 2, 3, 2, 1};
    int weight = 10;

    // Function call
    if (will_it_fly(v, weight)) {
        std::cout << "The aircraft will fly!" << std::endl;
    } else {
        std::cout << "The aircraft will not fly!" << std::endl;
    }

    return 0;
}

bool will_it_fly(std::vector<int> q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    if (sum > w) {
        return false;
    }
    
    for (int i = 0; i < q.size() / 2; i++) {
        if (q[i] != q[q.size() - 1 - i]) {
            return false;
        }
    }
    
    return true;
}