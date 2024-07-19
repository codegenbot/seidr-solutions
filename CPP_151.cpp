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
    vector<float> lst; 
    int odd_sum = 0; 

    float n;
    cin >> n;
    while(n--) {
        float a;
        cin >> a;
        lst.push_back(a);
    }

    for (float num : lst) {
        if (num % 2 != 0) {
            odd_sum += num;
        }
    }

    assert (double_the_difference(lst) == odd_sum );

    return 0;
}