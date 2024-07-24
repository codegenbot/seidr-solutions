Here is the completed code:

string file_name_check(string file_name){
    bool valid = true;
    int digit_count = 0;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        } else if(file_name[i] == '.'){
            break;
        }
    }

    if(file_name.find('.') == string::npos || file_name.find(' ') != string::npos){
        valid = false;
    }

    string ext = file_name.substr(file_name.find('.')+1);
    if(ext != "txt" && ext != "exe" && ext != "dll") valid = false;

    return valid ? "Yes" : "No";
}