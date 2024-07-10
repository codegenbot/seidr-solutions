#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; 
    int odd_sum = 0;
    
    cin >> lst.size();
    for (int i = 0; i < lst.size(); i++) {
        float x;
        cin >> x;
        lst.push_back(x);
    }
    
    long long result = double_the_difference(lst);
    cout << result;
    
    return 0;
}