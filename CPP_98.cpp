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

int main(){
    // Test cases
    string test1 = "AEIOU";
    string test2 = "AaEeIiOoUu";
    string test3 = "BCDFGHJKLMNPQRSTVWXYZ";
    
    // Expected outputs
    int expected1 = 3;
    int expected2 = 5;
    int expected3 = 0;
    
    // Output results
    int result1 = count_upper(test1);
    int result2 = count_upper(test2);
    int result3 = count_upper(test3);
    
    // Verify results
    return result1 == expected1 && result2 == expected2 && result3 == expected3;
}