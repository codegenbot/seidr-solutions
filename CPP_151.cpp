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

int main() {
    vector<double> lst;
    double odd_sum = 0;

    for (string line; getline(cin, line); ) {
        if (!line.empty()) {
            double val = stod(line);
            int diff = abs((int)val - 5);
            if (diff % 2 != 0) {
                lst.push_back(val);
                odd_sum += diff;
            }
        }
    }

    cout << "The numbers that are different from 5 by an odd number: ";
    for (double x : lst) {
        if (abs((int)x - 5) % 2 != 0) {
            cout << x << " ";
        }
    }
    cout << endl;

    cout << "The sum of the differences is: " << double_the_difference(lst) << endl;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}