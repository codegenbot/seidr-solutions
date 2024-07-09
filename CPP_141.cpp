Here is the completed code:

string file_name_check(string file_name){
    bool valid = true;
    int digit_count = 0;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            string extension = file_name.substr(i+1);
            if(extension != "txt" && extension != "exe" && extension != "dll") return "No";
            break;
        }
    }

    if(digit_count > 3 || file_name.find('.') == string::npos) return "No";

    if(file_name[0] < 'a' || file_name[0] > 'z' && file_name[0] < 'A' || file_name[0] > 'Z') return "No";

    return valid ? "Yes" : "No";
}