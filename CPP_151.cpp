#include <vector>
#include <cmath>

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    float num;
    long long odd_sum = 0; // Declare and initialize odd_sum variable
    
    cout << "Enter numbers (enter -1 to stop):" << endl;
    
    while ((cin >> num) && (num != -1)) {
        if (num > 0) {
            lst.push_back(num);
        }
    }
    
    odd_sum = double_the_difference(lst);
    
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}