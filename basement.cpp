
#include <vector>
#include <iostream>
using namespace std;

int basement(vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum >= 0) {
            return -1;
        }
    }
    return -1;
}

int main() {
    vector<int> v = {-3, 2, 4, -6};
    cout << basement(v) << endl;
    return 0;
}