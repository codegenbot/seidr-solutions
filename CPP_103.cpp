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
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "Enter the value of m: ";
    std::cin >> m;
    std::string result = rounded_avg(n, m);
    if (result == "-1") {
        std::cout << "Invalid input. n should be less than or equal to m." << std::endl;
    } else {
        std::cout << "The average rounded is: " << result << std::endl;
    }
    return 0;
}