#include <iostream>
#include <string>
using namespace std;

string circular_shift(int x, int shift) {
    string num_str = to_string(x);
    int n = num_str.size();
    shift %= n;
    
    if (shift == 0) {
        return num_str;
    }
    
    string result = num_str.substr(n - shift) + num_str.substr(0, n - shift);
    return result;
}

int main() {
    assert(circular_shift(11, 101) == "11");
  
    return 0;
}