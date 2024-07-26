#include <iostream>
#include <vector>
#include <cassert>

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> result = {8, 10, 12, 14, 16, 18, 20, 22};
    return result;
}

void solve_problem_cpp100() {
    int n;
    std::cin >> n;
    std::vector<int> result = make_a_pile(n);
    
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    
    std::cout << "\n";
}

int main() {
    assert(is_same(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    solve_problem_cpp100();
    return 0;
}