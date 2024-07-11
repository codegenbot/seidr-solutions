string file_name_check(string file_name){
    int count = 0;
    bool foundDot = false;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            count++;
        }
        else if(file_name[i] == '.'){
            foundDot = true;
        }
        else if(i > 0 && !foundDot){
            return "No";
        }
    }

    if(count > 3 || !foundDot) return "No";

    string extension = file_name.substr(file_name.find('.') + 1);
    vector<string> validExtensions = {"txt", "exe", "dll"};

    for(auto ext : validExtensions){
        if(extension == ext) return "Yes";
    }

    return "No";
}