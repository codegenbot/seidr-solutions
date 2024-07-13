Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string prefix;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            has_dot = true;
            prefix = file_name.substr(0, i);
        }
    }

    string suffix = file_name.substr(file_name.find('.')+1);

    if(!has_dot || prefix.empty() || !isalpha(prefix[0])) return "No";
    if(suffix != "txt" && suffix != "exe" && suffix != "dll") return "No";

    return "Yes";
}