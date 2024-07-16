#include <vector>
using namespace std;

int luhnAlgorithm(const vector<int>& ccNumber) {
    int sum = 0;
    for(int i = ccNumber.size() - 1; i >= 0; i--) {
        if(i % 2 == 0)
            sum += ccNumber[i];
        else {
            int digit = ccNumber[i] * 2;
            if(digit > 9) 
                digit -= 9;
            sum += digit;
        }
    }
    return sum;
}