string file_name_check(string file_name){
    int dot_count = 0, digit_count = 0;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.')
            dot_count++;
        else if(isdigit(file_name[i]))
            digit_count++;
        else if(i==0 && !isalpha(file_name[i])) 
            return "No";
    }
    if(dot_count != 1 || digit_count > 3)
        return "No";
    size_t pos = file_name.find('.');
    string extension = file_name.substr(pos+1);
    if(extension!="txt" && extension!="exe" && extension!="dll")
        return "No";
    return "Yes";
}