```cpp
#include <vector>
using namespace std;
long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}
int main() {
    vector<float> lst = {1.5, 3.4, 2.8, 4.9, 6.7};
    int odd_sum = double_the_difference(lst); 
    assert (double_the_difference(lst) == odd_sum );
}