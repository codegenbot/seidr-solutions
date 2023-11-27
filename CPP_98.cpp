#include <iostream>
#include <string>

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
    cout << count_upper("hello") << endl;   // Expected output: 2
    cout << count_upper("WORLD") << endl;   // Expected output: 3
    cout << count_upper("CodeContest") << endl;   // Expected output: 1
    
    return 0;
}