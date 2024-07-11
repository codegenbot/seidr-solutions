Here is the completed code:

string file_name_check(string file_name){
    int dot_count = 0;
    bool starts_with_letter = false;
    for(int i=0; i<file_name.size(); i++){
        if(file_name[i] == '.'){
            dot_count++;
            if(dot_count > 1) return "No";
        }
        else if(isdigit(file_name[i])){
            if(count(file_name.begin(), file_name.end(), '0') > 3) return "No";
        }
        else{
            starts_with_letter = true;
            break;
        }
    }
    string suffix = "";
    for(int i=file_name.size()-1; i>=0; i--){
        if(file_name[i] == '.'){
            break;
        }
        suffix += file_name[i];
    }
    if(suffix.length() > 0){
        if(starts_with_letter && (suffix.length() == 3 && (suffix == "txt" || suffix == "exe" || suffix == "dll"))) return "Yes";
        else return "No";
    }
    else return "No";
}