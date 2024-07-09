bool hasDigits = false;
bool hasDot = false;

for(int i=0; i<file_name.length(); i++) {
    if(file_name[i] >= '0' && file_name[i] <= '9') {
        if(hasDigits) return "No";
        hasDigits = true;
    }
    else if(file_name[i] == '.') {
        if(hasDot) return "No";
        hasDot = true;
    }
}

if(!hasDot || !file_name.substr(0, file_name.find('.')).find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos)
    return "No";

string extension = file_name.substr(file_name.find('.') + 1);
if(extension != "txt" && extension != "exe" && extension != "dll")
    return "No";

return "Yes";