#include <vector>

bool will_it_fly(const std::vector<int>& q, int w) {
    int total_weight = 0;
    for (int weight : q) {
        total_weight += weight;
    }
    
    return total_weight <= w;
}

int main() {
    int n, w;
    std::cin >> n >> w;
    
    std::vector<int> weights(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> weights[i];
    }
    
    if (will_it_fly(weights, w)) {
        std::cout << "Yes, it will fly!" << std::endl;
    } else {
        std::cout << "No, it will not fly!" << std::endl;
    }

    return 0;
}