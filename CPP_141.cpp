```c++
int i = 0;
bool is_valid = true;

// Check for more than three digits
while(i < file_name.length() && is_valid) {
    if(isdigit(file_name[i])) {
        i++;
        while(i < file_name.length() && isdigit(file_name[i])) {
            i++;
        }
        if(i - 1 > 3) {
            is_valid = false;
            break;
        }
    } else {
        i++;
    }
}

// Check for exactly one dot
int count_dot = 0;
for(int j = 0; j < file_name.length(); j++) {
    if(file_name[j] == '.') {
        count_dot++;
    }
}
if(count_dot != 1) {
    is_valid = false;
}

// Check for the substring before the dot starting with a letter
int start_index = 0;
for(int k = 0; k < file_name.length(); k++) {
    if(file_name[k] == '.') {
        start_index = k + 1;
        break;
    }
}
if(!isalpha(file_name[start_index])) {
    is_valid = false;
}

// Check for the substring after the dot being one of the allowed extensions
int end_index = file_name.length() - 1;
for(int l = 0; l < file_name.length(); l++) {
    if(file_name[end_index] == '.') {
        end_index--;
    } else {
        break;
    }
}
string extension = file_name.substr(start_index, end_index - start_index);
if(extension != "txt" && extension != "exe" && extension != "dll") {
    is_valid = false;
}

return is_valid ? "Yes" : "No";