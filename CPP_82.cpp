```cpp
#include <iostream>
#include <string>

bool prime_length(std::string str) {
    int len = str.length();
    if(len <= 1) return false;
    for(int i=2; i*i<=stoi(std::to_string(len)); i++){
        if(stoi(std::to_string(len))%i==0) return false;
    }
    return len > 1;
}

int main() {
    assert(prime_length("0") == false);
    //...
}