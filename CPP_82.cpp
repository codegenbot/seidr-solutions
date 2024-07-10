#include <iostream>
#include <string>

bool prime_length(const std::string& str){
    int len = str.length();
    if(len <= 1) return false;
    for(int i=2; i*i<=len; i++){
        if(len%i==0) return false;
    }
    return true;

}

int main() {
    assert (prime_length("0") == false);
    
    std::string input;
    cout << "Enter a string: ";
    cin >> input;
    
    if(prime_length(input)) 
        cout << "The length of the string is prime." << endl;
    else
        cout << "The length of the string is not prime." << endl;

    return 0;
}