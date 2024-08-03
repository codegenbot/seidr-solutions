#include <vector>
using namespace std;

int luhnAlgorithm(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = 15; i >= 0; --i) {
        if (!doubleNext) {
            sum += digits[i];
        } else {
            int temp = 2 * digits[i];
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        }
        doubleNext = !doubleNext;
    }
    
    return sum;
}

int main() {
    // get the vector of 16 digits from user
    int size;
    cout << "Enter the number of cards: ";
    cin >> size;
    for (int i = 0; i < size; ++i) {
        vector<int> cardNum(16);
        for (int j = 0; j < 16; ++j) {
            cin >> cardNum[j];
        }
        int result = luhnAlgorithm(cardNum);
        cout << "Result: " << result << endl;
    }
    
    return 0;
}