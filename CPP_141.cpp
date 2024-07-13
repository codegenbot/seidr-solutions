Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string before_dot;
    
    for(int i = 0; i < file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
        } else {
            if(file_name[i] == '.'){
                has_dot = true;
            } else {
                if(!before_dot.size()){
                    before_dot += file_name[i];
                }
            }
        }
    }
    
    if(digit_count > 3 || !has_dot || before_dot.empty() || !isalpha(before_dot[0])){
        return "No";
    } else {
        string after_dot = "";
        int j = file_name.find('.');
        for(int i = j + 1; i < file_name.length(); i++){
            if(file_name[i] == '.' || (after_dot.size() > 3)){
                break;
            }
            after_dot += file_name[i];
        }
        
        if(after_dot == "txt" || after_dot == "exe" || after_dot == "dll"){
            return "Yes";
        } else {
            return "No";
        }
    }
}