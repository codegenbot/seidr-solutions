#include <vector> 

std::vector<int> even_odd_count(int num) {
    std::vector<int> count(2, 0);
    std::string numStr = std::to_string(std::abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            count[0]++;
        } else {
            count[1]++;
        }
    }
    return count;
}

bool issame(std::vector<int> a, std::vector<int> b) { 
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    return 0;
}