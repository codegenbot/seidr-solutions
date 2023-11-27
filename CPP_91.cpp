#include <iostream>
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

int main(){
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    int result = is_bored(input);
    std::cout << "Count: " << result << std::endl;
    
    return 0;
}