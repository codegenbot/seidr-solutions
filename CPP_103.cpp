#include <cmath>
#include <string>
#include <bitset>

using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }
    
    double avg = round((double)sum / (m - n + 1));
    
    string binaryAvg = bitset<32>(avg).to_string();
    return binaryAvg.substr(binaryAvg.find('1'));
}