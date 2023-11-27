#include <string>
#include <cassert>

string flip_case(string str){
    string flipped_str = "";
    for(int i = 0; i < str.length(); i++){
        if(islower(str[i])){
            flipped_str += toupper(str[i]);
        }
        else{
            flipped_str += tolower(str[i]);
        }
    }
    return flipped_str;
}