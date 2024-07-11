#include <vector>
using namespace std;

int luhn(vector<int> &cards) {
    int sum = 0;
    for(int i=0; i<cards.size();i++) {
        if(i % 2 == 1) {
            cards[i] *= 2;
            if(cards[i] > 9) cards[i] -= 9;
        }
    }
    for(auto card : cards) sum += card;
    return sum;
}