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
    string test1 = "Hello";
    string test2 = "WORLD";
    string test3 = "AbCdEfGhIj";
    
    int result1 = count_upper(test1);
    int result2 = count_upper(test2);
    int result3 = count_upper(test3);
    
    return (result1 == 1 && result2 == 5 && result3 == 5);
}