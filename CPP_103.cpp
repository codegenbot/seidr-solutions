#include <string>

std::string computeBinaryAvg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = round((double)sum / (m - n + 1));
    
    std::string binaryAvg = "";
    while (avg > 0) {
        binaryAvg = std::to_string(avg % 2) + binaryAvg;
        avg /= 2;
    }
    
    return binaryAvg;
}

int main() {
    int n = 3;
    int m = 8;
    
    std::string result = computeBinaryAvg(n, m);
    
    return 0;
}