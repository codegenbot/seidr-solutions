#include <string>
#include <cmath>

std::string rounded_avg(int n, int m) {
    if (n > m)
        return "-1";
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = static_cast<double>(sum) / (m - n + 1);
    avg = std::floor(avg);
    std::string res = "";
    while (avg > 0.0) {
        if (static_cast<int>(avg) % 2)
            res.push_back('1');
        else
            res.push_back('0');
        avg /= 2.0;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    std::cout << rounded_avg(5, 10) << std::endl;
    return 0;
}