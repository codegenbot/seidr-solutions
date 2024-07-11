if (file_name.empty()) return "No";
int dotPos = file_name.find('.');
if (dotPos == string::npos || dotPos == 0 || dotPos == file_name.size() - 1) return "No";
string beforeDot = file_name.substr(0, dotPos);
string afterDot = file_name.substr(dotPos + 1);

if (beforeDot.find_first_of("0123456789") != string::npos || beforeDot.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos) return "No";
if (afterDot != "txt" && afterDot != "exe" && afterDot != "dll") return "No";
if (count_if(file_name.begin(), file_name.end(), ::isdigit) > 3) return "No";

return "Yes";
}