#include <vector>
#include <cmath>
#include <iostream>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int mainOld() {
    std::vector<float> myVector;
    int n;
    float temp;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> temp;
        myVector.push_back(temp);
    }

    int result = double_the_difference(myVector); 
    return 0;
}