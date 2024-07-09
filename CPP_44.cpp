#include <string> // Include the string header
#include <cassert> // Include the assert header

using namespace std; // Use the standard namespace

string change_base(int x, int base){
    string result = "";
    while(x > 0){
        result = to_string(x % base) + result;
        x /= base;
    }
    return result == "" ? "0" : result;
}

int main(){
    int x = 10;
    assert(change_base(x, x + 1) == to_string(x)); // Add include to_string(x) in main
    return 0;
}