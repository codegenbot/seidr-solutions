Here is the completed code:

string file_name_check(string file_name){
    int dot_count = 0, digit_count = 0;
    bool valid = true;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        }
        else if(isdigit(file_name[i])){
            digit_count++;
        }
        else if(!isalpha(file_name[i]) && !islower(file_name[i]) && !isupper(file_name[i])){
            valid = false;
            break;
        }
    }

    string extension = file_name.substr(file_name.find('.')+1);
    if(digit_count > 3 || dot_count != 1 || !valid || (extension!="txt" && extension!="exe" && extension!="dll")){
        return "No";
    }

    return "Yes";
}