#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    
    for (int i : x) {
        bool has_even_digit = false;
        
        // Convert integer to string and iterate over each character
        string str = to_string(i);
        for (char c : str) {
            if (c % 2 == 0) { // Check if digit is even
                has_even_digit = true;
                break;
            }
        }
        
        if (!has_even_digit) {
            result.push_back(i);
        }
    }
    
    sort(result.begin(), result.end());
    
    return result;
}