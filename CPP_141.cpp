#include <string>

string file_name_check(string file_name);

int main() {
    // your code
    return 0;
}

string file_name_check(string file_name){
    int dot_index = file_name.find(".");
    if(dot_index == string::npos){
        return "No";
    }
    string name_before_dot = file_name.substr(0, dot_index);
    string extension = file_name.substr(dot_index + 1);

    if(name_before_dot.empty() || !isalpha(name_before_dot[0])){
        return "No";
    }

    if(extension != "txt" && extension != "exe" && extension != "dll"){
        return "No";
    }

    int digit_count = 0;
    for(char c : name_before_dot){
        if(isdigit(c)){
            digit_count++;
        }
    }

    if(digit_count > 3){
        return "No";
    }

    return "Yes";
}