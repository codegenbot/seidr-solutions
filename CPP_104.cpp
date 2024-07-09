#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    
    for (int i : x) {
        bool has_even_digit = false;
        
        string str = to_string(i); 
        for (char c : str) { 
            if (c % 2 == 0) { 
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