#include <vector>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    for(int i = 0; i < card.size(); i++) {
        if((i % 2 == 1)) { 
            if((card[i] * 2) > 9) {
                sum += (card[i] * 2) - 9;
            } else {
                sum += card[i] * 2;
            }
        } else {
            sum += card[i];
        }
    }
    return sum;
}

int main() {
    vector<int> card = {3,4,5,6,7,8,9,1,2,3};
    cout << luhn(card) << endl; 
    return 0;
}