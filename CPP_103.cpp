#include <iostream>
#include <string>
#include <bitset>
#include <cmath>

using namespace std;

std::string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = std::round(sum / static_cast<double>(m - n + 1));
    string binary_avg = bitset<32>(avg).to_string();
    
    return binary_avg.substr(binary_avg.find('1'));
}