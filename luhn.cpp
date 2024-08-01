#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for(int i=0; i<digits.size(); i++) {
        if((i+1)%2!=0) {
            sum += digits[i];
        } else {
            int temp = (2*digits[i])%10;
            if(temp==9) {
                sum+=1;
            } else {
                sum+=temp;
            }
        }
    }
    return sum;
}