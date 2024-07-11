#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(vector<long long> lst) {
    long long sum = 0;
    for (long long num : lst) {
        if (num > 0 && abs(num - lround((double)num)) < 1e-9) {
            sum += pow(num, 2);
        }
    }
    return sum;

}

int main() {
    vector<long long> lst; 
    long long odd_sum = 0;
    
    cout << "Enter numbers (enter 'stop' to finish):" << endl;
    while(1) {
        long long num;
        
        cin >> num;
        
        if(to_string(num) == "stop") break;

        if(abs(num - lround((double)num)) < 1e-9) {
            odd_sum = double_the_difference(lst);
        }
        lst.push_back(num);    
    }

    cout << "Sum of squared values: " << odd_sum << endl;
    return 0; 
}