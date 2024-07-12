#include <iostream>
#include <vector>
using namespace std;

int basement(vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i + 1;
    }
    return -1;
}

int main() {
    vector<int> v1({1});
    cout << basement(v1) << endl;

    vector<int> v2({1, -100});
    cout << basement(v2) << endl;

    vector<int> v3({2, -1, 100});
    cout << basement(v3) << endl;

    vector<int> v4({2, -95, 100});
    cout << basement(v4) << endl;

    vector<int> v5({2, -30, 5});
    cout << basement(v5) << endl;
    
    return 0;
}