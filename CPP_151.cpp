#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

float doubleTheDifference(vector<float> lst){
    float sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && floor(lst[i]) == lst[i] && (int)lst[i] % 2 != 0) {
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.5, 2.3, 3.0, 4.5, 5.0};
    float odd_sum = 19.25;
    assert(doubleTheDifference(lst) == odd_sum);
    return 0;
}