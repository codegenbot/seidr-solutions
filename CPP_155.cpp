#include <vector>
#include <string>
#include <cctype>

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    std::string str = std::to_string(std::abs(num));
    for (char c : str) {
        if (c - '0' % 2 == 0)
            result[0]++;
        else
            result[1]++;
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a[0] + a[1]) == (b[0] + b[1]);
}

int main() {
    assert(std::issame(even_odd_count(0), {1, 0})); 
    return 0;
}