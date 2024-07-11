#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long double double_the_difference(vector<float> lst) {
    long double sum = 0;
    for (float num : lst) {
        if (num > 0 && abs(num - lround(num)) < 1e-9) {
            sum += pow(num, 2);
        }
    }
    return sum;

}

int main() {
    vector<float> lst; 
    long double odd_sum = 0;
    
    cout << "Enter numbers (enter 'stop' to finish):" << endl;
    while(1) {
        float num;
        
        cin >> num;
        
        if(to_string(num) == "stop") break;

        if(abs(num - lround(num)) < 1e-9) {
            odd_sum = 0; 
        }
        lst.push_back(num);    
    }

    cout << "Sum of squared values: " << double_the_difference(lst) << endl;
    return 0; 
}