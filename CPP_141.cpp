string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    for(int i=0; i<file_name.size(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            has_dot = true;
        }
        else if(i > 0 && !has_dot){
            if((file_name[i] < 'a' || file_name[i] > 'z') && (file_name[i] < 'A' || file_name[i] > 'Z')) return "No";
        }
    }
    string ext = "";
    for(int i=file_name.size()-1; i>=0; i--){
        if(file_name[i] == '.') break;
        else ext = file_name[i]+ext;
    }
    if(ext != "txt" && ext != "exe" && ext != "dll") return "No";
    return "Yes";
}