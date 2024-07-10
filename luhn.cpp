#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    for(int i = 0; i < digits.size(); i++) {
        if(i % 2 == 1) {
            int doubled = digits[i] * 2;
            if(doubled > 9) {
                doubled -= 9;
            }
            sum += doubled;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    vector<int> digits = {3,4,5,1,3,6,7,8,9,0,8,6,7,4,3,2};
    cout << luhn(digits);
    return 0;
}