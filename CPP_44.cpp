#include <string>
#include <cassert>
#include <cstdio>

std::string change_base(long long x, long long base){
    std::string result = "";
    while(x > 0){
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main(){
    long long x = 10;
    assert(change_base(x, x + 1) == std::to_string(x));
    return 0;
}