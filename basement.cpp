#include <vector>
#include <iostream>
using namespace std;

int basement(vector<int>& v) {
    int sum = 0;
    bool negSum = false; // keep track of whether the sum has ever been negative
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum >= 0) {
            return i + 1; // return the first index where the sum becomes negative
        } else {
            negSum = true; // set negSum to true if the sum is ever negative
        }
    }
    if (negSum) {
        return -1; // no index found, return -1
    } else {
        return 0; // sum was never negative, return 0
    }
}

int main() {
    vector<int> v{20,46,-7,54,-52,56,99,78,17,13,-56,-53,-73,-26,-51,-57,31,-34,-50,-80,-7};
    cout << basement(v) << endl;
    return 0;
}