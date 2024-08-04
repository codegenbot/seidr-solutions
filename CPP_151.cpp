#include <vector>

long long double_the_difference(vector<double> lst){
    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    vector<double> lst = {1.5, 2.0, 3.0, -4.5, 5.0};
    long long result = double_the_difference(lst);
    
    return 0;
}