#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int sum_squares(vector<float> lst){
    int total = 0;
    for(float num : lst){
        total += ceil(num) * ceil(num);
    }
    return total;
}

int main() {
    assert(sum_squares({-1,1,0})==2);
    return 0;
}