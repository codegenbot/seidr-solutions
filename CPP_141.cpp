string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    bool valid_start = false;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        } else if(isdigit(file_name[i])){
            digit_count++;
        } else if(isalpha(file_name[i])){
            valid_start = true;
        }
    }

    if(digit_count > 3 || dot_count != 1 || !valid_start){
        return "No";
    }

    size_t found = file_name.find('.');
    string extension = file_name.substr(found+1);

    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if(find(valid_extensions.begin(), valid_extensions.end(), extension) == valid_extensions.end()){
        return "No";
    }

    return "Yes";
}