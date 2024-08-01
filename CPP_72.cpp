#include <vector>

bool will_it_fly(const std::vector<int>& q, int w) {
    int total_weight = 0;
    for (int weight : q) {
        total_weight += weight;
    }
    
    return total_weight <= w;
}

int main() {
    std::vector<int> weights;
    int max_weight;
    
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int weight;
        std::cin >> weight;
        weights.push_back(weight);
    }
    
    std::cin >> max_weight;
    
    if (will_it_fly(weights, max_weight)) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
    
    return 0;
}