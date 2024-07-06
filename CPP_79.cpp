#include <cassert>
#include <string>
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