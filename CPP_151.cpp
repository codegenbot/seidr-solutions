```cpp
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    vector<float> numbers;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        float x;
        cin >> x;
        numbers.push_back(x);
    }
    
    long long result = double_the_difference(numbers);
    cout << result << endl;
    
    return 0;
}