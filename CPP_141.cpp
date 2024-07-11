int digitCount = 0;
    for(char c : file_name){
        if(isdigit(c)){
            digitCount++;
        }
    }
    if(digitCount > 3){
        return "No";
    }
    if(file_name.find(".") == string::npos || file_name.find(".") == 0 || file_name.find_last_of(".") == file_name.length()-1){
        return "No";
    }
    string name = file_name.substr(0, file_name.find("."));
    string extension = file_name.substr(file_name.find(".")+1);
    if(name.empty() || !isalpha(name[0]) || extension != "txt" || extension != "exe" || extension != "dll"){
        return "No";
    }
    return "Yes";
}