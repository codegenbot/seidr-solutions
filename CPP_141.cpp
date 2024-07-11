string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3)
                return "No";
        }
        else if(file_name[i] == '.')
            found_dot = true;
        else if(found_dot && file_name[i] == ' ' || find({"txt", "exe", "dll"}, file_name.substr(i)) != string::npos)
            return "Yes";
    }
    if(digit_count > 3 || !found_dot || file_name[0] < 'a' || file_name[0] > 'z' && file_name[0] < 'A' || file_name[0] > 'Z')
        return "No";
    return "Yes";
}