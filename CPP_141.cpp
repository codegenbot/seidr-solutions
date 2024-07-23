#include <string>
using namespace std;

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digit_count++;
        } else if(c == '.'){
            has_dot = true;
        } else if(!has_dot && !isalpha(c)){
            return "No";
        }
        i++;
    }
    if(digit_count > 3 || !has_dot){
        return "No";
    }
    string extension = file_name.substr(file_name.find('.') + 1);
    if(extension != "txt" && extension != "exe" && extension != "dll"){
        return "No";
    }
    return "Yes";