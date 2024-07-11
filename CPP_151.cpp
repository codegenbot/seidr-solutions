#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(vector<float>& lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum * 2;
}

int main() {
    vector<float> lst = {1.5, 2, 3, 4.5, 5};
    cout << double_the_difference(lst) << endl;
    
    return 0;
}