#include <bits/stdc++.h>
using namespace std;

int sum_squares(vector<float> lst){
    int result = 0;
    for(float num : lst) {
        int ceil_num = ceil(num);
        result += pow(ceil_num, 2);
    }
    return result;
}

int main() {
    vector<float> numbers = {1.5f, 2.3f, 4.7f};
    cout << "Sum of squares: " << sum_squares(numbers) << endl;
    return 0;
}