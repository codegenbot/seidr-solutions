#include <iostream>
#include <string>
#include <algorithm>

std::string file_name_check(const std::string& file_name) {
    if(file_name.empty()) return "No";
    size_t dot_pos = file_name.find('.');
    if(dot_pos == std::string::npos || dot_pos == 0 || dot_pos == file_name.size()-1) return "No";
    std::string before_dot = file_name.substr(0, dot_pos);
    std::string after_dot = file_name.substr(dot_pos+1);
    if(before_dot.find_first_of("1234567890") != std::string::npos || after_dot.find_first_not_of("1234567890") != std::string::npos) return "No";
    if(std::count(before_dot.begin(), before_dot.end(), '.') > 0 || std::count(after_dot.begin(), after_dot.end(), '.') > 0) return "No";
    if(after_dot != "txt" && after_dot != "exe" && after_dot != "dll") return "No";
    return "Yes";
}

int main() {
    assert(file_name_check("s.") == "No");
    // Add more test cases if needed
    return 0;
}