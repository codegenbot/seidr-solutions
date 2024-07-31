#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    
    for (int i : x) {
        bool has_even_digit = false;
        
        int n = i; // Convert integer to a number
        while (n > 0) {
            int digit = n % 10; 
            if (digit % 2 == 0) { // Check if the last digit is even
                has_even_digit = true;
                break;
            }
            n /= 10;
        }
        
        if (!has_even_digit) {
            result.push_back(i);
        }
    }
    
    sort(result.begin(), result.end());
    
    return result;
}