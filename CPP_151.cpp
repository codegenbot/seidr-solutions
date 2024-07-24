#include <cmath>
#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        float x;
        cin >> x;
        lst.push_back(x);
    }

    long long odd_sum = 0; 
    assert(double_the_difference(lst) == odd_sum);

    return 0;
}