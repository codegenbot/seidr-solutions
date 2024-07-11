Here is the completed code:

string file_name_check(string file_name){
    int count = 0;
    bool has_dot = false;
    string before_dot = "";
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(isdigit(c)){
            count++;
            if(count > 3) return "No";
        }
        else if(c == '.'){
            has_dot = true;
            before_dot = file_name.substr(0, i);
            string after_dot = file_name.substr(i+1);
            if(after_dot.length() == 0 || (after_dot != "txt" && after_dot != "exe" && after_dot != "dll")) return "No";
        }
        else if(!isalpha(c) && c != ' '){
            if(before_dot.length() > 0 && !isalpha(before_dot[0])) return "No";
            break;
        }
    }
    return has_dot ? (before_dot.length() > 0 ? "Yes" : "No") : "No";
}