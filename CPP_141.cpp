Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string before_dot;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            has_dot = true;
            break;
        }
        else{
            before_dot += file_name[i];
        }
    }

    if(!has_dot) return "No";

    string after_dot = file_name.substr(file_name.find('.')+1);
    if(after_dot.length() < 3) return "No";
    for(int i=0; i<after_dot.length(); i++){
        if(after_dot[i] != 't' && after_dot[i] != 'x' && after_dot[i] != 'e' 
           && after_dot[i] != 'd' && after_dot[i] != 'l' && after_dot[i] != 'l') return "No";
    }

    if(before_dot.length() == 0 || !isalpha(before_dot[0])) return "No";

    return "Yes";
}