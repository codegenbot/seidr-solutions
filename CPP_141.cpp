std::string file_name_check(std::string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    std::string before_dot;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
        else{
            before_dot += file_name[i];
        }
    }

    if(!found_dot || before_dot.empty() || !isalpha(before_dot[0])) return "No";

    std::string after_dot = file_name.substr(found_dot ? file_name.find('.')+1 : file_name.length());
    if(after_dot != "txt" && after_dot != "exe" && after_dot != "dll") return "No";

    return "Yes";
}

int main() {
    assert(file_name_check("s.") == "No");
    return 0;
}