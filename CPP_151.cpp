#include <vector>

using namespace std;

long long double_the_difference(vector<float>& lst) {
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += num * num;
        }
    }
    return odd_sum;
}

int main() {
    vector<float> lst;
    lst = {1, 2, 3, 4, 5};
    long long odd_sum = double_the_difference(lst);
   
    return 0;
}