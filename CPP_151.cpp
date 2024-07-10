#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

double double_the_difference(vector<double> lst) {
    int sum = 0;
    for (double x : lst) {
        int diff = abs((int)x - 5);
        if (diff % 2 != 0) {
            sum += diff;
        }
    }
    return static_cast<double>(sum);
}

int main_func() {
    vector<double> lst;
    double odd_sum = 0;

    for (string line; getline(cin, line); ) {
        if (!line.empty()) {
            double val = stod(line);
            int diff = abs((int)val - 5);
            if (diff % 2 != 0) {
                odd_sum += val;
            }
            lst.push_back(val);
        }
    }

    for (double x : lst) {
        if (abs((int)x - 5) % 2 != 0) {
            cout << x << " ";
        }
    }
    cout << endl;

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}