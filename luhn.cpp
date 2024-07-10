```cpp
#include <vector>
#include <iostream>

using namespace std;

int luhn(const vector<int>& card) {
    int sum = 0;
    for (int i = 0; i < card.size(); i++) {
        if ((i % 2) == 1) {
            int temp = card[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += card[i];
        }
    }
    return sum;
}

int main() {
    vector<int> card = {3, 4, 5, 1, 3, 5, 2, 8, 6, 2, 8, 9, 7, 1, 0, 2}; 
    int result = luhn(card);
    cout << "Result: " << result << endl;
    return 0;
}