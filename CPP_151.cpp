```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && int(x) == x) { 
            if (int(x) % 2 != 0) { 
                sum += pow(int(x), 2);
            }
        }
    }
    return sum;
}

int main(){
    vector<float> lst = {1.5, 3.8, 4.9, -2.7};
    long long result = double_the_difference(lst);
    cout << "Result: " << result << endl;
    return 0;
}