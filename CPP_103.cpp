#include <string>  // Include the necessary header

std::string binary_avg(int n, int m) {  // Change string to std::string
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = sum / (m - n + 1);  // Remove the round function
    
    std::string binary_avg = "";
    while (avg > 0) {
        binary_avg = std::to_string(avg % 2) + binary_avg;
        avg /= 2;
    }
    
    return binary_avg;
}

int main() {
    assert(binary_avg(5, 5) == "101");  // Update the function name to binary_avg
    return 0;
}