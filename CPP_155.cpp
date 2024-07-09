#include <vector>
#include <string>

std::vector<int> even_odd_count(int num) {
    int evens = 0, odds = 0;
    std::string str = std::to_string(std::abs(num));
    for (char c : str) {
        if (stoi(c) % 2 == 0)
            evens++;
        else
            odds++;
    }
    bool issame = (evens > 0 && odds == 1);
    return {evens, odds};
}

int main() {
    std::vector<int> result = even_odd_count(0);
    if (result[0] == 1 && result[1] == 0) {
        return 0;
    } else {
        return 1; 
    }
}