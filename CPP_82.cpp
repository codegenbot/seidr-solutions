#include <iostream>
#include <string>

bool prime_length(std::string str){
    int n = str.length();
    for(int i=2; i*i<=n; i++){
        if(n%i==0)
            return false;
    }
    return true;

}

int main() {
    assert (prime_length("0") == false);
    return 0;
}