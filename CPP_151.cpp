#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long int double_the_difference(vector<float> lst) {
    long long int sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num && (int)num % 2 != 0) {
            sum += 2 * (int)num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    int n;
    float val;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin >> val;
        lst.push_back(val);
    }

    cout << double_the_difference(lst) << endl;
    return 0;
}