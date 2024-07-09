#include <iostream>
#include <string>
using namespace std;

string solve(int N) {
    string binary = "";
    while(N > 0){
        if(N % 2 == 1)
            binary = "1" + binary;
        else
            binary = "0" + binary;
        N /= 2;
    }
    return binary;
}