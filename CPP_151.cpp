#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<float> lst;
    long long odd_sum = 0;
    
    cout << "Enter numbers (enter 'stop' to finish):" << endl;
    string input;
    while (true) {
        cin >> input;
        if (input == "stop") break;
        
        float x = stof(input);
        if (x > 0 && floor(x) == x) { 
            if (x % 2 != 0) { 
                odd_sum += pow(x, 2);
            }
        }
    }
    
    cout << "The sum of squares of all odd positive integers is: " << odd_sum << endl;
    
    return 0;
}