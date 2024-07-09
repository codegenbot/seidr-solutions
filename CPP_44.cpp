#include <string>
#include <cassert>

using namespace std;

string change_base(int x, int base){
    assert(base >= 2 && base <= 10); 
    assert(x >= 0); 
    
    string result = "";
    while (x > 0){
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}