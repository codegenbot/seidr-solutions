Here is the completed code:

string file_name_check(string file_name){
    int dot_count = 0;
    bool has_letter = false;
    int digit_count = 0;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            dot_count++;
        } else if(isdigit(c)){
            digit_count++;
        } else if(isalpha(c) && !has_letter){
            has_letter = true;
        }
    }

    return (dot_count == 1 && digit_count <= 3 && has_letter && 
            (file_name.find("txt") != string::npos || file_name.find("exe") != string::npos || file_name.find("dll") != string::npos)) ? "Yes" : "No";
}