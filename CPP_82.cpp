```
#include <iostream>
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
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << boolalpha << (prime_length(input) ? "Prime" : "Not Prime") << endl;
    return 0;
}