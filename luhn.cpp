```c++
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
    vector<int> digits = {3,4,5,8,7,1,6,0,2,0,8,3,4};
    int result = luhn(digits);
    cout << "Luhn value: " << result << endl;
    return 0;
}