#include <vector>
#include <iostream>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    for(int i = 0; i < card.size(); ) {
        if(i % 2 == 1) {
            int temp = card[i] * 2;
            if(temp > 9) {
                sum += (temp % 10) + 1;
            } else {
                sum += temp;
            }
        } else {
            sum += card[i];
        }
        i++;
    }
    return sum;
}

int main() {
    vector<int> card;
    int num;
    for(int i = 0; i < 16; ) {
        cout << "Enter the digit (" << i + 1 << ") of your credit card: ";
        cin >> num;
        card.push_back(num);
        i++;
    }
    int result = luhn(card);
    cout << "Result: " << result << endl;
    return 0;
}