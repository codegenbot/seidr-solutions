#include <vector>
#include <string>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

std::vector<int> even_odd_count(int num) {
    int evens = 0, odds = 0;
    std::string str = std::to_string(abs(num));
    for (char c : str) {
        if (stoi(c) % 2 == 0)
            evens++;
        else
            odds++;
    }
    return {evens, odds};
}

int main() {
    assert(issame(even_odd_count(0), std::vector<int>({1, 0})));
    return 0;
}