#include <string>
using namespace std;

string rounded_avg(int n, int m);

int main() {
    assert (rounded_avg(5, 5) == "101");
    // other test cases...
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