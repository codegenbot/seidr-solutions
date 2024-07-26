if(file_name.empty()) return "No";
int dot_pos = file_name.find('.');
if(dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.length()-1) return "No";
string name_before_dot = file_name.substr(0, dot_pos);
string extension = file_name.substr(dot_pos + 1);

int digit_count = 0;
for(char c : name_before_dot){
    if(isdigit(c)) digit_count++;
}
if(digit_count > 3) return "No";

if(extension != "txt" && extension != "exe" && extension != "dll") return "No";

if(!isalpha(name_before_dot[0])) return "No";

return "Yes";
}