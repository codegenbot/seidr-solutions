#include <iostream>
#include <string>

using namespace std;

int count_upper(const string& s){
    int count = 0;
    for(int i = 0; i < s.length(); i+=2){
        char c = s[i];
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            count++;
        }
    }
    return count;
}

int main() {
    // Test cases
    cout << count_upper("HELLO") << endl; // Expected output: 2
    cout << count_upper("WORLD") << endl; // Expected output: 1
    cout << count_upper("C++") << endl; // Expected output: 0
    
    return 0;
}