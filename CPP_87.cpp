#include <vector>

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b){
    return a == b;
}

int main() {
    // Your existing code here

    assert (get_row({{}, {1}, {1, 2, 3}}, 3) == std::vector<std::vector<int>>{{2, 2}});
    
    return 0;
}