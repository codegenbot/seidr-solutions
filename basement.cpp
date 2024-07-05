#include <vector>
#include <iostream>
using namespace std;

int basement(vector<int>& v) {
    int i = 0, sum = 0;
    for (; i < v.size(); ++i) {
        sum += v[i];
        if (sum < 0) break;
    }
    return i == v.size() ? -1 : i + 1;
}

int main() {
    vector<int> v{1,2,3,4};
    cout << basement(v) << endl;
    return 0;
}