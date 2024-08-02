#include <vector>
#include <cassert>

std::vector<int> get_odd_collatz(int x) {
    std::vector<int> sequence;
    while(x != 1) {
        sequence.push_back(x);
        if (x % 2 == 0) {
            x = x / 2;
        } else {
            x = 3 * x + 1;
        }
    }
    sequence.push_back(1);
    return sequence;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    // Sample usage of get_odd_collatz
    std::vector<int> sequence = get_odd_collatz(7);
    for (int num : sequence) {
        std::cout << num << " ";
    }
    
    return 0;
}