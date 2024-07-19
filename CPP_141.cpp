if(file_name.empty()) return "No";
int dot_pos = file_name.find('.');
if(dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.size()-1) return "No";
string before_dot = file_name.substr(0, dot_pos);
string after_dot = file_name.substr(dot_pos+1);
if(before_dot.find_first_of("1234567890") != string::npos || after_dot.find_first_not_of("1234567890") != string::npos) return "No";
if(count(before_dot.begin(), before_dot.end(), '.') > 0 || count(after_dot.begin(), after_dot.end(), '.') > 0) return "No";
if(after_dot != "txt" && after_dot != "exe" && after_dot != "dll") return "No";
return "Yes";
}