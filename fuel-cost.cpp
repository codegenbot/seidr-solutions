#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    vector<int> v = {1, 6};
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        int x = v[i];
        x /= 3;
        x -= 2;
        sum += x;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}