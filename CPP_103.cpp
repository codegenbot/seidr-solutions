#include <cstddef>
#include <bitset>

string solve(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    double avg = static_cast<double>(sum) / (m - n + 1);
    int rounded_avg = round(avg);
    string binary = bitset<32>(static_cast<unsigned long>(rounded_avg)).to_string();
    size_t found = binary.find('1', 0);
    
    return binary.substr(found);
}