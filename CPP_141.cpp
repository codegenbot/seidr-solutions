Here is the solution:

string file_name_check(string file_name){
    int digitCount = 0;
    bool foundDot = false;
    string beforeDot;

    for(int i = 0; i < file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            foundDot = true;
        }else if(isdigit(c)){
            digitCount++;
        }else{
            if(!foundDot){
                beforeDot += c;
            }
        }
    }

    if(digitCount > 3 || !foundDot || beforeDot.empty() || (!isalpha(beforeDot[0])) || (beforeDot.length() + 4 > file_name.length())){
        return "No";
    }else{
        string extension = file_name.substr(file_name.find('.')+1);
        if(extension != "txt" && extension != "exe" && extension != "dll"){
            return "No";
        }
    }

    return "Yes";
}