```cpp
int digit_count = 0;
bool has_dot = false;

for(int i=0; i<file_name.length(); i++){
    if(file_name[i] >= '0' && file_name[i] <= '9'){
        digit_count++;
    } else if(file_name[i] == '.'){
        has_dot = true;
    }
}

if(digit_count > 3 || !has_dot){
    return "No";
}

size_t dot_index = file_name.find('.');
string before_dot = file_name.substr(0, dot_index);
string after_dot = file_name.substr(dot_index+1);

if(before_dot.empty() || !isalpha(before_dot[0])){
    return "No";
}

vector<string> valid_extensions = {"txt", "exe", "dll"};
if(find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end()){
    return "No";
}

return "Yes";