string file_name_check(string file_name){
    int count = 0;
    for(auto c : file_name){
        if(c >= '0' && c <= '9'){
            count++;
            if(count > 3) return "No";
        }
        else if(c == '.'){
            count = 0;
        }
        else if(count > 0 && !isalpha(c)){
            return "No";
        }
    }
    int pos = file_name.find('.');
    if(pos < 0 || pos + 4 >= file_name.size()) return "No";
    string ext = file_name.substr(pos+1,3);
    if(ext != "txt" && ext != "exe" && ext != "dll") return "No";
    return "Yes";
}