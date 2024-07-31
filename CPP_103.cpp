#include <iostream>
#include <bitset>

std::string calculate(int n, int m) {
    if (n > m) {
        return "-1";
    }
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    int avg = round((double)sum / (m - n + 1));
    std::string binary = std::bitset<32>(avg).to_string();
    size_t found = binary.find('1');
    return binary.substr(found);
}

int main() {
    assert(calculate(5, 5) == "101");
    return 0;
}