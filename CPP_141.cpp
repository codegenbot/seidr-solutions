```cpp
int digitCount = 0;
bool foundDot = false;

for(char c : file_name){
    if(c == '.'){
        foundDot = true;
    } else if(isdigit(c)){
        digitCount++;
    }
}

if(digitCount > 3 || !foundDot) return "No";
else if(file_name.find('.') != string::npos && file_name.substr(0, file_name.find('.')).find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos){
    string extension = file_name.substr(file_name.find('.'), file_name.size()).substr(1);
    string validExtensions[] = {"txt", "exe", "dll"};
    for(string s : validExtensions){
        if(s == extension) return "Yes";
    }
}
return "No";