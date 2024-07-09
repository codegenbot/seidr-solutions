#include <string>

std::string fix_spaces(std::string text){
    std::string result = "";
    for(int i=0; i < text.length(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ') && (i==text.length()-1 || text[i+1] != ' ')){
            result += '_';
        }else if(text[i] == ' '){
            int j = i;
            while(j > 0 && text[j-1] == ' '){
                j--;
            }
            i = j;
            if(i < text.length() - 1 && text[i] == ' ' && text[i+1] == ' '){
                result += '-';
            }else{
                result += '_';
            }
        }else{
            result += text[i];
        }
    }
    return result;
}