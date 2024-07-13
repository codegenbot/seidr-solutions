```cpp
#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i : digits) {
        if (doubleNext) {
            int doubled = i * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
            doubleNext = false;
        } else {
            sum += i;
            doubleNext = true;
        }
    }
    
    return sum;
}

int main() { 
    vector<int> digits = {4,3,2,1,8,7,6,5};
    int result = luhn(digits);
    cout << "The credit card number is valid with a Luhn check if the sum is 0. The sum of the new digits is: " << result;
    return 0;
}