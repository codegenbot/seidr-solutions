Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digit_count++;
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
        else if(found_dot){
            string ext = file_name.substr(i);
            if(ext != "txt" && ext != "exe" && ext != "dll")
                return "No";
        }
    }

    if(digit_count > 3 || !found_dot)
        return "No";

    if(file_name[0] < 'a' || file_name[0] > 'z' && file_name[0] < 'A' || file_name[0] > 'Z')
        return "No";

    return "Yes";
}