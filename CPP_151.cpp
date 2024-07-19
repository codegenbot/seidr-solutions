#include <iostream>
#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst; 
    int odd_sum = 0; 
    
    int n; 
    cin >> n; 
    for (int i = 0; i < n; i++) { 
        float temp; 
        cin >> temp; 
        if (temp > 0) {
            modf(temp, &lst[i]);
            if (modf(temp, &temp) == 0.0) {
                odd_sum += temp * temp;
            }
        }
    }
    
    assert (double_the_difference(lst) == odd_sum );

    return 0;
}