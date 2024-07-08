#include <cassert>
#include <string>
#include <algorithm>
#include <vector>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for(int i : q) {
        str += std::to_string(i);
    }
    if(std::accumulate(q.begin(), q.end(), 0) != std::accumulate(q.rbegin(), q.rend(), 0))
        return false;
    int sum = 0;
    for(int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    
    std::vector<int> weights;
    int total_weight;
    
    std::cout << "Enter the number of weights: ";
    int n;
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::cout << "Enter weight " << i + 1 << ": ";
        int weight;
        std::cin >> weight;
        weights.push_back(weight);
    }
    
    std::cout << "Enter the total weight limit: ";
    std::cin >> total_weight;
    
    if(will_it_fly(weights, total_weight)) {
        std::cout << "The package will fly.\n";
    } else {
        std::cout << "The package won't fly.\n";
    }
}