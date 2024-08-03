```
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int sum_squares(vector<float> lst){
    int result = 0;
    for(float num : lst) {
        int ceil_num = ceil(num);
        result += pow(ceil_num, 2);
    }
    return result;
}
int main() {
    vector<float> numbers = {1.5, 3.2, 4.8};
    cout << "Sum of squares is: " << sum_squares(numbers) << endl;
    return 0;
}