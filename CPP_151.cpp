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
    float num;
    cout << "Enter numbers separated by spaces: ";
    while (cin >> num) {
        lst.push_back(num);
    }

    long long odd_sum = double_the_difference(lst);

    return 0;
}