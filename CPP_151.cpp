#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

int doubleTheDifference(vector<float> lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && floor(lst[i]) == lst[i] && (int)lst[i] % 2 != 0) {
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.5, 2.0, 3.3, 4.0, 5.5};
    int odd_sum = 0;
    odd_sum = doubleTheDifference(lst);
    assert(odd_sum == doubleTheDifference(lst));
    return 0;
}