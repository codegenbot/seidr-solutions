#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    vector<float> lst;
    float num;
    cout << "Enter numbers (enter 'stop' to finish): ";
    while (true) {
        cin >> num; 
        if (cin.fail()) break;
        if (num == "stop") break;
        lst.push_back(num);
    }
    long long sum = 0;
    for (float n : lst) {
        if (n > 0 && modf(n, &n) == 0) {
            sum += pow(n, 2);
        }
    }
    cout << "Sum of squares: " << sum << endl;
}