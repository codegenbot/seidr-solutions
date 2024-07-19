int count_digits = 0, count_dots = 0;
    int dot_position = -1;
    
    if(file_name.empty()) return "No";
    
    for(int i=0; i<file_name.size(); ++i){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            count_digits++;
            if(count_digits > 3) return "No";
        } 
        else if(file_name[i] == '.'){
            count_dots++;
            dot_position = i;
        } 
        else if(i == dot_position + 1){
            string extension = file_name.substr(dot_position + 1);
            if(extension != "txt" && extension != "exe" && extension != "dll"){
                return "No";
            }
        }
    }
    
    if(count_dots != 1 || dot_position == 0 || dot_position == file_name.size()-1 || 
        !(file_name[0] >= 'a' && file_name[0] <= 'z') && !(file_name[0] >= 'A' && file_name[0] <= 'Z')){
        return "No";
    }
    
    return "Yes";
}