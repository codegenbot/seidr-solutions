#include <vector>
using namespace std;

int luhnAlgorithm(const vector<int>& ccNum) {
    int sum = 0;
    bool isDouble = false;
    
    for (auto digit : ccNum) {
        if (isDouble) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        
        sum += digit;
        isDouble = !isDouble; // toggle the boolean
    }
    
    return sum;
}

int main() {
    int numDigits, temp;
    vector<int> ccNum;

    cin >> numDigits;
    for (int i = 0; i < numDigits; ++i) {
        cin >> temp;
        ccNum.push_back(temp);
    }

    cout << luhnAlgorithm(ccNum) << endl;
    
    return 0;
}