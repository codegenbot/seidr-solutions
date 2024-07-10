#include <vector>
#include <cassert>
#include <iostream>
#include <initializer_list>

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

    for (string line; getline(cin, line); ) {
        if (!line.empty()) {
            double val = stod(line);
            int diff = abs((int)val - 5);
            if (diff % 2 != 0) {
                // odd_sum += val;
            }
            lst.push_back(val);
        }
    }

    cout << "The numbers that are different from 5 by an odd number: ";
    for (double x : lst) {
        if (abs((int)x - 5) % 2 != 0) {
            cout << x << " ";
        }
    }
    cout << endl;

    assert(double_the_difference(lst) == 0);

    return 0;
}