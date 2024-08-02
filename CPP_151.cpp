#include <cmath>
#include <vector>

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> my_lst = {1.5f, 2.2f, 3.8f};
    int odd_sum = double_the_difference(my_lst);
    cout << "The result is: " << odd_sum << endl;
}