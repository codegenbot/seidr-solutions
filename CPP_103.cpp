#include <string>

string rounded_avg(int n, int m);

int main() {
    int n, m;
    cin >> n >> m;

    cout << rounded_avg(n, m) << endl;

    return 0;
}

string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    int count = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
        count++;
    }
    
    int average = sum / count;
    string binary = "";
    while (average > 0) {
        binary = to_string(average % 2) + binary;
        average /= 2;
    }
    
    return binary;
}