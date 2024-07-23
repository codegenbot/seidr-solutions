#include <vector>
using namespace std;

int luhn(vector<int>& card_number) {
    int sum = 0;
    for(int i = card_number.size() - 1; i >= 0; --i){
        if(i % 2 != 0){
            int temp = card_number[i] * 2;
            if(temp > 9){
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += card_number[i];
        }
    }
    return sum;
}