#include <iostream>
#include <cmath>
#include <string>

std::string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round(sum / (m - n + 1));
    std::string res = "";
    while (avg > 0) {
        if (avg >= 2) {
            res += "1";
            avg -= 2;
        } else {
            res += "0";
            avg++;
        }
    }
    return res;
}

int main() {
    int n, m;
    std::cout << "Enter the range [n, m]: ";
    std::cin >> n >> m;
    std::cout << "Rounded average: " << rounded_avg(n, m) << std::endl;
    return 0;
}