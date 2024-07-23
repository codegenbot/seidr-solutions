#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> myVector; 
    myVector.push_back(1.5f); 
    myVector.push_back(2.0f); 
    myVector.push_back(3.25f); 
    float result = double_the_difference(myVector);
    return 0;
}