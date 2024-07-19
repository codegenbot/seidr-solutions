#include <string>
#include <cassert>

string solve(int n, int m) {
    assert(n >= 0 && m >= 0 && n <= m);

    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = round((double)sum / (m - n + 1));
    
    string binary = "";
    while (avg > 0) {
        binary = to_string(avg % 2) + binary;
        avg /= 2;
    }
    
    return binary;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    string result = solve(n, m);
    cout << result;
    
    return 0;
}