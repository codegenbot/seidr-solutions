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
    vector<int> num = {4,3,2,1,0,9,8,7,6,5,4,3,2,1}; 
    int result = luhnCheck(num);
    cout << "The result is: " << result << endl; 
    return 0;
}