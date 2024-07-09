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
    float sum = 0, odd_sum = 0;

    // Read input from user
    int n;
    cin >> n;

    lst.resize(n);

    for (float& num : lst) {
        cin >> num;
    }

    // Calculate the difference
    sum = double_the_difference(lst);

    cout << "The result is: " << sum << endl;

    return 0;
}