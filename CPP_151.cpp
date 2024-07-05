#include <iostream>
#include <vector>

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num == (int)num && num > 0 && ((int)num % 2 != 0)) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    float value;
    while (cin >> value) {
        lst.push_back(value);
    }
    long long result = double_the_difference(lst);
    cout << result << endl;
    return 0;
}