#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((int)lst[i] % 2 == 1 && lst[i] > 0) {
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1, 2, 3};
    int odd_sum = 0;
    cout << double_the_difference(lst) << endl;
    return 0;
}