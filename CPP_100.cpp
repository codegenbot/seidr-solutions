#include <iostream>
#include <vector>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; ++i) {
        if (is_same(result, {8, 10, 12, 14, 16, 18, 20, 22})) {
            result.push_back(i);
        }
    }
    return result;
}

int solve_problem_cpp100() {
    int n;
    std::cin >> n;
    std::vector<int> result = make_a_pile(n);
    
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    
    std::cout << "\n";
    
    return 0;
}

int main() {
    solve_problem_cpp100();
    return 0;
}