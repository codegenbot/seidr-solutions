#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int hex_key(string num){
    int count = 0;
    string primes = "2357BD";
    for(char c : num){
        if(primes.find(c) != string::npos){
            count++;
        }
    }
    return count;
}

int main() {
    assert(hex_key("") == 0);
    // Add more test cases here if needed

    return 0;
}