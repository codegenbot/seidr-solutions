#include <vector>
#include <iostream>
using namespace std;

int basement(vector<int>& v) {
    size_t i = 0;
    int sum = 0;
    for (i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    vector<int> v{20,46,-7,54,-52,56,99,78,17,13,-56,-53,-73,-26,-51,-57,31,-34,-50,-80,-7};
    cout << basement(v) << endl;
    return 0;
}