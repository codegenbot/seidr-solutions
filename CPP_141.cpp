string file_name_check(string file_name){
    int count = 0;
    bool foundDot = false;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            count++;
        } else if(file_name[i] == '.'){
            foundDot = true;
        } else if(foundDot){
            string ext = file_name.substr(i+1);
            if(ext != "txt" && ext != "exe" && ext != "dll")
                return "No";
        }
    }
    if(count > 3 || !foundDot)
        return "No";
    return "Yes";
}