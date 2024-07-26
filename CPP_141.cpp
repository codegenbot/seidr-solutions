if(file_name.empty())
    return "No";

int dotIndex = file_name.find('.');
if(dotIndex == string::npos || dotIndex == 0 || dotIndex == file_name.size() - 1)
    return "No";

string beforeDot = file_name.substr(0, dotIndex);
string afterDot = file_name.substr(dotIndex + 1);

if(beforeDot.find_first_of("0123456789") != string::npos || beforeDot.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos)
    return "No";

if(afterDot != "txt" && afterDot != "exe" && afterDot != "dll")
    return "No";

return "Yes";
}