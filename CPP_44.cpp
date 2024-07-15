#include <string> 

std::string convert_base(int x, int base){ 
    std::string result = "";
    while(x > 0){
        result = std::to_string((x % base)) + result;
        x /= base;
    }
    return result;
}

int main(){
    int x = 2;
    assert(convert_base(x, x + 1) == std::to_string(x)); 
    return 0;
}