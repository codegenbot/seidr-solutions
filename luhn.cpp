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
    vector<int> num = {4, 7, 8, 1, 3, 2, 8, 6, 5, 9, 4, 0, 1, 7, 2, 8}; 
    int result = luhnCheck(num);
    cout << "The result is: " << result << endl; 
    return 0;
}