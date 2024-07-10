#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string calculate_binary(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    int count = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
        count++;
    }
    
    int avg = round((double)sum / count);
    
    string binary = "";
    while (avg > 0) {
        binary = to_string(avg % 2) + binary;
        avg /= 2;
    }
    
    return binary;
}

int main() {
    assert(calculate_binary(5, 5) == "101");
    return 0;
}