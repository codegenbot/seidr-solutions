#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long double_the_difference(const vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(num) * static_cast<long long>(num);
        }
    }
    return sum * 2;
}

int main() {
    vector<float> lst;
    float temp;

    while (cin >> temp) {
        if (cin.fail()) break;
        lst.push_back(temp);
    }

    long long result = double_the_difference(lst);
    cout << result << endl;

    return 0;
}