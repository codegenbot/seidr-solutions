Here is the completed code:

string file_name_check(string file_name){
    int count = 0;
    bool found_dot = false;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            count++;
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
    }

    if(count > 3 || !found_dot){
        return "No";
    }

    string first_part = file_name.substr(0, file_name.find('.'));
    if(first_part.empty() || !isalpha(first_part[0])){
        return "No";
    }

    string second_part = file_name.substr(file_name.find('.') + 1);
    if(second_part != "txt" && second_part != "exe" && second_part != "dll"){
        return "No";
    }

    return "Yes";
}