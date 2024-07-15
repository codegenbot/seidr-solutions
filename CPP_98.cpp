#include <string>

int count_upper(std::string s){
    int count = 0;
    for(int i = 0; i < s.length(); i += 2){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            count++;
        }
    }
    return count;
}

int main(){
    assert (count_upper("EEEE") == 2);
    return 0;
}