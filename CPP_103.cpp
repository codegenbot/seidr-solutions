```cpp
#include <iostream>
#include <string>
using namespace std;

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = (double)sum / (m - n + 1);
    int rounded = lround(avg);
    string binary = "";
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
    cout << "Enter the start and end of the range: ";
    cin >> n >> m;
    string result = rounded_avg(n,m);
    if(result == "-1") 
        cout << "Invalid input. Start number should not be greater than the end number.";
    else
        cout << "The binary representation of the average is: " << result;
    return 0;
}