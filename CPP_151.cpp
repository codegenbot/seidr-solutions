#include <vector>
#include <cmath>

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { 
            sum += pow(x, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst; 
    float odd_sum = 0.0f; 

    for(float i : std::cin >> i) {
        if(i > 0 && floor(i) == i) { 
            odd_sum += pow(i, 2);
        }
    }

    assert(double_the_difference(lst) == odd_sum); 
    return 0;
}