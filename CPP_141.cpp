string file_name_check(string file_name){
    int count = 0;
    bool foundDot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            count++;
            if(count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            foundDot = true;
        }
        else if(foundDot && (i != file_name.length() - 4)){
            return "No";
        }
    }
    string suffix = "";
    for(int i=file_name.find('.'); i<file_name.length(); i++){
        suffix += file_name[i];
    }
    if(suffix == "txt" || suffix == "exe" || suffix == "dll") {
        return "Yes";
    } else {
        return "No";
    }
}