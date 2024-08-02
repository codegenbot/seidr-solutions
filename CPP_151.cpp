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
    float n;
    long long odd_sum = 0;

    std::cout << "Enter the number of elements: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        float num;
        cin >> num;
        
        if (num > 0 && modf(num, &num) == 0.0) {
            odd_sum += num * num;
        }
    }

    assert(double_the_difference(lst) == odd_sum);
    return 0;
}