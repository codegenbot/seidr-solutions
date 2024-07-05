#include <vector>
#include <iostream>
using namespace std;

int basement(vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum >= 0) {
            return -1; // no index found, return -1
        }
    }
    
    if (sum < 0) {
        return i; // return index where sum first becomes negative
    } else {
        return -1; // no index found, return -1
    }
}

int main() {
    vector<int> v{1,2,3,4};
    cout << basement(v) << endl;
    return 0;
}