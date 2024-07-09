#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    
    for (int num : x) {
        bool has_even_digit = false;
        
        // Convert integer to string and iterate over each character
        string str = to_string(num);
        for (char c : str) {
            if (stoi(string(1, c)) % 2 == 0) {
                has_even_digit = true;
                break;
            }
        }
        
        if (!has_even_digit) {
            result.push_back(num);
        }
    }
    
    sort(result.begin(), result.end());
    
    return result;
}