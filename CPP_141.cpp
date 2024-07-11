Here is the solution:

string file_name_check(string file_name){
    int count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.size();i++){
        char c = file_name[i];
        if(c>= '0' && c<= '9'){
            count++;
        } else if(c == '.'){
            found_dot = true;
        } else {
            if(!found_dot || !isalpha(c)){
                return "No";
            }
        }
    }
    if(count > 3 || !found_dot){
        return "No";
    }
    size_t pos = file_name.find('.');
    string ext = file_name.substr(pos+1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if(find(valid_extensions.begin(), valid_extensions.end(),ext) == valid_extensions.end()){
        return "No";
    }
    return "Yes";
}