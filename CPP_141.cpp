```cpp
int digit_count = 0;
bool found_dot = false;

for(int i=0; i<file_name.length(); i++){
    char c = file_name[i];
    if(c == '.'){
        found_dot = true;
    }else if(isdigit(c)){
        digit_count++;
    }else if(found_dot){
        string extension = file_name.substr(i);
        if(extension != "txt" && extension != "exe" && extension != "dll"){
            return "No";
        }
    }else if(!isalpha(c) && c != '.'){
        return "No";
    }
}

if(digit_count > 3 || !found_dot){
    return "No";
}

return "Yes";