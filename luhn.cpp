#include <vector>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    bool alt = false;
    for (int i = card.size() - 1; i >= 0; --i) {
        int digit = card[i];
        if (alt) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alt = !alt;
    }
    return sum;
}

int main() {
    vector<int> card; 
    int input;
    for(int i=0; i<16; ++i){
        cin >> input;
        card.push_back(input);
    }
    cout << luhn(card); 
    return 0;
}