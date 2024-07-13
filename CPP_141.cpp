```cpp
int count_digits = 0;
bool has_dot = false;

for(int i = 0; i < file_name.length(); i++){
    if(file_name[i] >= '0' && file_name[i] <= '9'){
        count_digits++;
    } else if(file_name[i] == '.'){
        has_dot = true;
    }
}

if(count_digits > 3 || !has_dot){
    return "No";
}

string before_dot = "";
string after_dot = "";

for(int i = 0; i < file_name.length(); i++){
    if(file_name[i] == '.'){
        break;
    } else {
        before_dot += file_name[i];
    }
}

for(int i = file_name.length() - 1; i >= 0; i--){
    if(file_name[i] == '.'){
        break;
    } else {
        after_dot = file_name[i] + after_dot;
    }
}

if(before_dot.empty() || !isalpha(before_dot[0])){
    return "No";
}

string extensions[] = {"txt", "exe", "dll"};
bool found = false;

for(int i = 0; i < 3; i++){
    if(after_dot == extensions[i]){
        found = true;
        break;
    }
}

if(!found){
    return "No";
}

return "Yes";