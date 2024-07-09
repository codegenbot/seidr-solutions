```cpp
string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digit_count++;
        }
        else if(c == '.'){
            found_dot = true;
        }
        else if(i > 0 && (!found_dot || !isalpha(file_name[0]))){
            return "No";
        }
    }
    if(digit_count > 3 || !found_dot || file_name.find(".").length() != 4){
        return "No";
    }
    string extension = file_name.substr(file_name.find("."), file_name.length());
    if(extension != ".txt" && extension != ".exe" && extension != ".dll"){
        return "No";
    }
    return "Yes";