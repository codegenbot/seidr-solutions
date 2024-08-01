#include <cmath>
#include <string>

using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    long sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1));
    string result = to_string(avg);
    string binary = "";
    while (!result.empty()) {
        int digit = result.back() - '0';
        if (digit % 2 == 0) {
            result.pop_back();
        } else {
            break;
        }
    }
    for (int i = 0; i < result.length(); ++i) {
        binary += to_string(stoi(result.substr(i, 1)) % 2);
    }
    reverse(binary.begin(), binary.end());
    return binary;
}