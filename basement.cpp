#include <vector>
#include <iostream>
using namespace std;

int basement(vector<int>& v) {
    size_t i = 0;
    int sum = 0;
    for (i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum >= 0) {
            return -1; // return -1 if no index found where the sum becomes negative
        }
    }
    return i + 1; // return the first index where the sum becomes negative
}

int main() {
    vector<int> v{1,2,3,4};
    cout << basement(v) << endl;
    return 0;
}