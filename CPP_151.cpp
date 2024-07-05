#include <iostream>
#include <vector>
#include <cmath> // for floor function

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num == floor(num) && num > 0 && ((int)num) % 2 != 0) {
            sum += (int)num * (int)num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    float temp;
    while (cin >> temp) {
        lst.push_back(temp);
    }
    long long result = double_the_difference(lst);
    cout << result << endl;
    return 0;
}