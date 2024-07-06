```cpp
#include <string>
#include <cassert>

using namespace std;

std::string decimal_to_binary(int n){
    std::string binary = "";
    do{
        if(n % 2 == 0) binary += '0';
        else binary += '1';
        n /= 2;
    }while(n > 0);
    return binary;
}

int main() {
    assert (decimal_to_binary(15) == "11111");
    return 0;
}