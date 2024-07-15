#include <string>

bool is_nested_string(const string& str){
    int count = 0;
    for(char c : str){
        if(c == '['){
            count++;
        } else if(c == ']' && count > 0){
            count--;
        }
    }
    return count < 0;
}