Here is the completed code:

```cpp
string file_name_check(string file_name){
    int dot_count = 0;
    bool valid = true;
    int digit_count = 0;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            dot_count++;
        }
        else if(isdigit(c)){
            digit_count++;
        }
        else if(!isalpha(c) && c != '.'){
            valid = false;
            break;
        }
    }

    if(dot_count > 1 || digit_count > 3){
        valid = false;
    }

    string extension = file_name.substr(file_name.find('.') + 1);
    if(extension != "txt" && extension != "exe" && extension != "dll"){
        valid = false;
    }

    return valid ? "Yes" : "No";
}