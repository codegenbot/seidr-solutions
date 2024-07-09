#include <string>
#include <cassert>
using namespace std;

string change_base(int x, int base){
    string result = "";
    while(x > 0){
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    // Add test cases here
    return 0;
}