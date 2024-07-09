#include <string>

using namespace std;

string change_base(int x, int base) {
    string res = "";
    bool is_negative = false;
    
    if(x < 0) {
        is_negative = true;
        x *= -1;
    }
    
    while (x > 0) {
        int rem = x % base;
        
        if(rem >= 10 && base <= 36)
            res.insert(0, 1, ('A' + rem - 10));
        else
            res.insert(0, 1, '0' + rem);
        
        x /= base;
    }
    
    if(is_negative) 
        res.insert(0, 1, '-');
    
    return (x == 0)? "0":res;
}