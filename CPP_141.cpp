string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c>= '0' && c <= '9'){
            digit_count++;
            if(digit_count > 3) return "No";
        } else if(c == '.'){
            found_dot = true;
        } else if(c < 'a' || (c>'z' && c<'A') || (c>'Z')){
            return "No";
        }
    }

    if(!found_dot) return "No";

    int pos = file_name.find('.');
    string ext = file_name.substr(pos+1);

    if(ext!="txt" && ext!="exe" && ext!="dll")
        return "No";

    return "Yes";
}