#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    
    for (int num : x) {
        bool hasEvenDigit = false;
        
        int digit = 0;
        while (num > 0) {
            digit = num % 10;
            if (digit % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            num /= 10;
        }
        
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    
    sort(result.begin(), result.end());
    
    return result;
}