#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

std::string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = static_cast<double>(sum) / (m - n + 1);
    avg = std::nearbyint(avg + 0.5); 
    int val = static_cast<int>(avg);
    std::string binary;
    while (val > 0) {
        if(val % 2 == 0) {
            binary.push_back('0');
        } else {
            binary.push_back('1');
        }
        val /= 2;
    }

    std::reverse(binary.begin(), binary.end());
    return binary.empty() ? "0" : binary;
}

int main() {
    int n, m;
    std::cout << "Enter two numbers: ";
    std::cin >> n >> m;
    std::cout << rounded_avg(n, m);
    return 0;
}