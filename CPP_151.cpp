#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; // define lst
    float odd_sum = 0; // define odd_sum
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        float num;
        cin >> num;
        lst.push_back(num);
    }
    
    long long result = double_the_difference(lst);
    
    cout << "The sum of squares is: " << result << endl;
    
    return 0;
}