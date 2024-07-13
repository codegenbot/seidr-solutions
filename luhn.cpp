using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    for(int i = 0; i < card.size(); i++) {
        if(i % 2 != 0) {
            card[i] *= 2;
            if(card[i] > 9) {
                card[i] -= 9;
            }
        }
    }
    for(int i = 0; i < card.size(); i++) {
        sum += card[i];
    }
    return sum;
}