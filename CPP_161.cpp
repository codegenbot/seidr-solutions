#include <string>

std::string solve(std::string s);

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::string output = solve(input);
    std::cout << output << std::endl;
    return 0;
}

std::string solve(std::string s){
    std::string result = "";
    bool hasLetter = false;
    
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            hasLetter = true;
            if(isupper(s[i])){
                result += tolower(s[i]);
            }
            else{
                result += toupper(s[i]);
            }
        }
        else{
            result += s[i];
        }
    }
    
    if(!hasLetter){
        std::reverse(result.begin(), result.end());
    }
    
    return result;
}