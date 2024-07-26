string file_name_check(const string& file_name) {
    if(file_name.empty()) return "No";
    size_t dotPos = file_name.find(".");
    if(dotPos == string::npos || dotPos == 0 || dotPos == file_name.size()-1) return "No";
    string beforeDot = file_name.substr(0, dotPos);
    string afterDot = file_name.substr(dotPos + 1);
    if(beforeDot.find_first_of("0123456789") != string::npos || beforeDot.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos) return "No";
    if(afterDot != "txt" && afterDot != "exe" && afterDot != "dll") return "No";
    return "Yes";
}