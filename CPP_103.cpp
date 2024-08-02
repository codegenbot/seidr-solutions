#include <cmath>
using namespace std;

string solve(int n, int m) {
    if(n > m) {
        return "-1";
    }
    
    int sum = 0;
    for(int i = n; i <= m; i++) {
        sum += i;
    }
    
    double avg = round(static_cast<double>(sum) / (m - n + 1));
    
    return to_string(static_cast<int>(avg));
}