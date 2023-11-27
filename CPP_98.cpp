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
    // test cases
    string s1 = "AEIOU";
    string s2 = "BCDFG";
    string s3 = "aeiou";
    
    int result1 = count_upper(s1); // expected output: 3
    int result2 = count_upper(s2); // expected output: 0
    int result3 = count_upper(s3); // expected output: 0
    
    return 0;
}