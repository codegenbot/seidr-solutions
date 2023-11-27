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
    // Test the count_upper function with various test cases
    string test1 = "HELLO";
    string test2 = "WORLD";
    string test3 = "Cpp Contest";
    
    int result1 = count_upper(test1);
    int result2 = count_upper(test2);
    int result3 = count_upper(test3);
    
    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;
    
    return 0;
}