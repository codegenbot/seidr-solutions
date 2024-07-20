#include <iostream>
#include <bitset>
#include <cassert>

std::string task_function(int n, int m) {
    if (n > m) {
        return "-1";
    }

    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    int avg = (int)((double)sum / (m - n + 1));
    std::bitset<32> binary_avg(avg);
    return binary_avg.to_string().substr(binary_avg.to_string().find('1'));
}

int main() {
    assert(task_function(5, 5) == "101");
    return 0;
}