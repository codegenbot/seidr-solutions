int file_name_check(string file_name) {
    int digitCount = 0;
    bool foundDot = false;
    string fileNameOnly = "";
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digitCount++;
        }else if(c == '.'){
            foundDot = true;
            if(fileNameOnly != "") return "No";
        }else{
            fileNameOnly += c;
        }
    }
    if(digitCount > 3 || !foundDot) return "No";
    if(file_name[0] < 'a' || file_name[0] > 'z' && file_name[0] < 'A' || file_name[0] > 'Z') return "No";
    if(fileNameOnly.length() != 1) return "Yes"; 
    string extension = file_name.substr(i, file_name.find_last_of('.') - i);
    if(extension != "txt" && extension != "exe" && extension != "dll") return "No";
    return "Yes";
}