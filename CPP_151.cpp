#include <iostream>
#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst; // declare and initialize lst
    int odd_sum = 0; // declare and initialize odd_sum
    
    for(int i = 1; i <= 10; ++i){
        float num = (float)i / 2.5f;
        if(num > 0 && modf(num, &num) == 0) {
            lst.push_back(num);
        }
    }
    
    int sum = 0; 
    for (float num : lst) {
        if (num > 0) {
            sum += num * num;
        }
    }
    
    assert (double_the_difference(lst) == sum );

    return 0;
}