#include <iostream>
#include <sstream>
using namespace std;

class Solution {
public:
    double calculate(double b, int n) {
        double res = b;
        while (n--) {
            res = b * res;
        }
        return res;
    }
    double calculateDistance(double s, double b, int n) {
        return s * (1 - calculate(b, n)) / (1 - b);
    }
};

int main() {
    Solution s;
    cout << s.calculateDistance(15.319, 0.365, 1) << endl;
    return 0;
}
