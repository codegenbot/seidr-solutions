```cpp
#include <vector>
using namespace std;

int luhnCheck(vector<int> num) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = num.size() - 1; i >= 0; --i) {
        int digit = num[i];
        
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        
        sum += digit;
        doubleNext = !doubleNext;
    }
    
    return sum;
}

int main() {
    vector<int> num = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}; 
    cout << "Luhn Check: " << luhnCheck(num) << endl;
    return 0;
}