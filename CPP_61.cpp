#include <string>
using namespace std;

bool is_permutation_of_original(string original, string modified) {
    if (original.length() != modified.length()) 
        return false;
    
    int open_count = 0, close_count = 0;
    for (char c : original) {
        if (c == '(')
            open_count++;
        else
            close_count++;
    }
    
    for (char c : modified) {
        if (c == '(')
            open_count--;
        else
            close_count--;
        
        if (open_count < 0 || close_count < 0) 
            return false;
    }
    
    return open_count == 0 && close_count == 0;
}