Here is the completed code:

```cpp
string file_name_check(string file_name){
    int dot_count = 0;
    bool has_digit = false;
    string before_dot;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        } else if(isdigit(file_name[i])){
            has_digit = true;
        } else {
            if(i > 0){
                before_dot += file_name[i];
            }
        }
    }

    if(dot_count != 1 || has_digit > 3 || before_dot.empty() || !isalpha(before_dot[0])){
        return "No";
    } else if(file_name.substr(file_name.find('.')+1).compare("txt") == 0 ||
             file_name.substr(file_name.find('.')+1).compare("exe") == 0 ||
             file_name.substr(file_name.find('.')+1).compare("dll") == 0){
        return "Yes";
    } else {
        return "No";
    }
}