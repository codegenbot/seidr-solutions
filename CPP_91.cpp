#include <string>

int is_bored(std::string S){
    int count = 0;
    int i = 0;
    int n = S.length();
    
    while(i < n){
        if(S[i] == 'I'){
            while(i < n && S[i] != '.' && S[i] != '?' && S[i] != '!'){
                i++;
            }
            count++;
        }
        i++;
    }
    
    return count;
}

int main() {
    // Test cases
    std::string test1 = "I am bored.";
    std::string test2 = "Are you bored?";
    std::string test3 = "No, I'm not bored!";
    
    int result1 = is_bored(test1);
    int result2 = is_bored(test2);
    int result3 = is_bored(test3);
    
    return 0;
}