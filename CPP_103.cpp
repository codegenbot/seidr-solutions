```cpp
#include <sstream>

using namespace std;

string res = string(); 

string rounded_avg(int n, int m) {
    if (n > m) return "-" + rounded_avg(n, m);
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1)); 
    std::ostringstream oss;
    while(avg > 0.5) {
        oss << (avg & 1 ? '1' : '0');
        avg /= 2;
    }
    return oss.str();
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << rounded_avg(n, m);
}