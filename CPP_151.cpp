#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(vector<double> lst) {
    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && abs(num - lround(num)) < 1e-9) {
            sum += pow(num, 2);
        }
    }
    return sum;

}

int main() {
    vector<double> lst; 
    double odd_sum = 0;
    
    cout << "Enter numbers (enter 'stop' to finish):" << endl;
    while(1) {
        double num;
        
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