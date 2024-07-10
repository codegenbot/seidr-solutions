Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.')
            has_dot = true;
        else if(has_dot){
            string extension = &file_name[i];
            if(extension != "txt" && extension != "exe" && extension != "dll")
                return "No";
        }
    }
    if(!has_dot) return "No";
    if(file_name[0] < 'a' || file_name[0] > 'z' && file_name[0] < 'A' || file_name[0] > 'Z')
        return "No";
    return "Yes";
}