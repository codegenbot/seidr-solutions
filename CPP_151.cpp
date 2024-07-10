```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {};
    float n;
    int size;
    cin >> size;
    
    for(int i=0; i<size; i++) {
        cin >> n;
        lst.push_back(n);
    }
    
    long long result = double_the_difference(lst);
    
    cout << "The sum of the squares of the positive integers in the array is: " << result << endl;

    return 0;
}