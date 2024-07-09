#include <vector>
#include <cmath>

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { // check if number is positive and integer
            sum += pow(x, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst; 
    float odd_sum = 0.0f; 

    int n;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        float x;
        cin >> x;
        if(x > 0 && floor(x) == x) { // check if number is positive and integer
            odd_sum += pow(x, 2);
        }
    }

    assert(double_the_difference(lst) == odd_sum); 
    return 0;
}