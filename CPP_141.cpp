```c++
bool has_digit = false;
int dot_count = 0;

for (char c : file_name) {
    if (isdigit(c)) {
        has_digit |= true;
    } else if (c == '.') {
        dot_count++;
    }
}

if (dot_count > 1 || !has_digit || (file_name.find('.') == string::npos && !isalpha(file_name[0]))) {
    return "No";
}

size_t pos = file_name.find('.');
string before_dot = file_name.substr(0, pos);
string after_dot = file_name.substr(pos + 1);

if (!(before_dot.length() > 0 && isalpha(before_dot[0])) || 
   (!after_dot.compare("txt") && !after_dot.compare("exe") && !after_dot.compare("dll"))) {
    return "No";
}

return "Yes";