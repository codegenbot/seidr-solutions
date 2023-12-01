#include <string>

std::string circular_shift(int x, int shift);

int main() {
    assert(circular_shift(11, 101) == "11");
    // more test cases...
}

std::string circular_shift(int x, int shift){
    std::string num = std::to_string(x);
    int len = num.length();
    
    if(shift > len){
        std::reverse(num.begin(), num.end());
        return num;
    }
    
    shift %= len;
    std::rotate(num.rbegin(), num.rbegin() + shift, num.rend());
    
    return num;
}