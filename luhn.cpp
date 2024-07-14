```cpp
#include <vector>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    for (int i = card.size() - 1; i >= 0; --i) {
        if ((card[i] * 2) > 9) {
            sum += (card[i] * 2) - 9;
        } else {
            sum += card[i] * 2;
        }
        if (i % 2 != 0) {
            sum += card[i];
        }
    }
    return sum;
}

int main() {
    vector<int> card; 
    for(int i = 0 ; i < 16 ; i++) {
        int num;
        cout << "Enter the digit at position " << i+1 << ": ";
        cin >> num;
        card.push_back(num);
    }
    cout << luhn(card) << endl;
    return 0;
}