#include <string>

std::string anti_shuffle(std::string s){
    string result = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            result += " ";
            continue;
        }
        char temp[s[i] + 1];
        int j = 0;
        while(i < s.length() && s[i] != ' '){
            temp[j++] = s[i++];
        }
        temp[j] = '\0';
        for(int k = 0; k < j; k++){
            result += (char)temp[k];
        }
    }
    return result;
}

int main() {
    assert (anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}