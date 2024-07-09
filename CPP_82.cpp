#include <iostream>
#include <string>

using namespace std;

bool prime_length(string str){
    int len = str.length();
    for(int i=2; i*i <= len; i++){
        if(len%i==0)
            return false;
    }
    return true;
}

int main(){
    cout << boolalpha << (prime_length("10") ? "Prime" : "Not Prime") << endl;
    assert (!prime_length("0"));
    return 0;
}