if(file_name.empty() || file_name.find('.') == string::npos)
    return "No";

string before_dot = file_name.substr(0, file_name.find('.'));
string after_dot = file_name.substr(file_name.find('.') + 1);

if(before_dot.empty() || !isalpha(before_dot[0]) || count_if(file_name.begin(), file_name.end(), [](char c) { return isdigit(c); }) > 3)
    return "No";

if(after_dot != "txt" && after_dot != "exe" && after_dot != "dll")
    return "No";

return "Yes";
}