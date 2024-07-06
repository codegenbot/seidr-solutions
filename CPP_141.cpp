Here is the completed code:

string file_name_check(string file_name){
    int digitCount = 0;
    bool foundDot = false;
    bool validPrefix = true;
    string prefix;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            foundDot = true;
            prefix = file_name.substr(0, i);
            break;
        } else if(isdigit(c)){
            digitCount++;
            if(digitCount > 3) return "No";
        } else {
            validPrefix &= isalpha(c);
        }
    }

    if(!foundDot) return "No";

    string suffix = file_name.substr(i+1, file_name.length());
    if(suffix != "txt" && suffix != "exe" && suffix != "dll") return "No";

    if(validPrefix) return "Yes";
    else return "No";
}