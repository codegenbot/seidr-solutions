```
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int sum = 0;
    for(char c : s){
        if(islower(c)){
            sum += (c - 'a' + 1);
        }
    }
    cout << "The digit sum is: " << sum << endl;
    return 0;
}