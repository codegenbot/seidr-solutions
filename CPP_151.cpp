#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && floor(num) == num) {
            sum += pow(num - floor(num), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;  
    float sum = 0;
    int odd_sum = 0;

    // read input from user
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        float num;
        cin >> num;
        lst.push_back(num);
    }

    // calculate the sum and return it
    cout << double_the_difference(lst) << endl;

    return 0;
}