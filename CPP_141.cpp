if(file_name.empty()) return "No";
int dot_pos = file_name.find(".");
if(dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.size()-1) return "No";
string prefix = file_name.substr(0, dot_pos);
string suffix = file_name.substr(dot_pos + 1);
if(prefix.find_first_of("0123456789") != string::npos || prefix.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos || suffix != "txt" && suffix != "exe" && suffix != "dll") return "No";
int digit_count = 0;
for(char c : file_name){
    if(isdigit(c)) digit_count++;
}
if(digit_count > 3) return "No";
return "Yes";
}