```cpp
int file_name_check(string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    bool valid_prefix = true;

    for(int i = 0; i < file_name.length(); i++) {
        if(isdigit(file_name[i])) {
            digit_count++;
        }
        else if(file_name[i] == '.') {
            found_dot = true;
        }
        else if(i >= 1 && !isalpha(file_name[i-1]) && !isdigit(file_name[i-1])) {
            valid_prefix = false;
        }
    }

    return (digit_count <= 3 && found_dot && valid_prefix) ? 1 : 
           (!found_dot && !std::all_of(file_name.begin() + digit_count, file_name.end(), ::isalpha())) ? 0 : 1;
}