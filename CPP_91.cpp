
#include <string>

int is_bored(std::string S){
    int count = 0;
    std::string word = "";
    for(char c : S){
        if(c == '.' || c == '?' || c == '!'){
            if(word.length() > 0 && word[0] == 'I'){
                count++;
            }
            word = "";
        } else if(c != ' '){
            word += c;
        }
    }
    if(word.length() > 0 && word[0] == 'I'){
        count++;
    }
    return count;
}

int main(){
    assert (is_bored("You and I are going for a walk") == 0);
    return 0;
}