```cpp
#include <iostream>
#include <string>

std::string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = (double)sum / (m - n + 1);
    int rounded = lround(avg);
    std::string binary = "";
    while(rounded > 0) {
        if(rounded & 1)
            binary = "1" + binary;
        else
            binary = "0" + binary;
        rounded >>= 1;
    }
    return binary;
}

int main() {
    int n, m;
    std::cout << "Enter the range: ";
    std::cin >> n >> m;
    std::cout << "The rounded average in binary is: " << rounded_avg(n,m) << std::endl;
    return 0;
}