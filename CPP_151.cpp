#include <iostream>
#include <vector>

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num == (int)num && num > 0 && ((int)num % 2 != 0)) {
            sum += (int)num * (int)num;
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;  // Number of elements
    vector<float> lst(n);
    for (int i = 0; i < n; ++i) {
        cin >> lst[i];  // Reading elements
    }
    
    cout << double_the_difference(lst) << endl;  // Output the result
    
    return 0;
}