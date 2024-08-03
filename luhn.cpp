#include <vector>
using namespace std;

int luhnAlgorithm(const vector<int>& ccNum) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = ccNum.size() - 1; i >= 0; --i) {
        int digit = ccNum[i];
        
        if (doubleNext) {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        
        sum += digit;
        doubleNext = !doubleNext;
    }

    return sum;
}

int main() {
    vector<int> ccNum = vector<int>(16);
    for (int i = 0; i < 16; ++i) {
        cin >> ccNum[i];
    }

    cout << luhnAlgorithm(ccNum) << endl;

    return 0;
}