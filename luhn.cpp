#include <vector>
using namespace std;

int luhn(vector<int> &card_number) {
    int sum = 0;
    for(int i = card_number.size() - 1; i >= 0; --i) {
        if(i % 2 == 1)
            sum += card_number[i] * 2 > 9 ? card_number[i] * 2 - 9 : card_number[i] * 2;
        else
            sum += card_number[i];
    }
    return sum;
}

int main() {
    int n;
    vector<int> card_number;

    cin >> n;
    for(int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        card_number.push_back(temp);
    }

    cout << luhn(card_number) << endl;

    return 0;
}