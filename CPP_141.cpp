```cpp
int count_digits = 0;
bool found_dot = false;

for(int i=0; i<file_name.length(); i++){
    if(file_name[i] >= '0' && file_name[i] <= '9'){
        count_digits++;
    }
    else if(file_name[i] == '.'){
        found_dot = true;
    }
    else if(found_dot && (file_name[i] == 't' || file_name[i] == 'x' || file_name[i] == 'd' || file_name[i] == 'l')){
        return "Yes";
    }
}

if(count_digits > 3 || !found_dot) {
    return "No";
}
else if(file_name.length() < 2 || (file_name[0] < 'a' && file_name[0] > 'z') && (file_name[0] < 'A' && file_name[0] > 'Z')) {
    return "No";
}

return "Yes";