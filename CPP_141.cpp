#include <string>

string file_name_check(string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    string before_dot;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(isdigit(c)){
            digit_count++;
            if(digit_count > 3)
                return "No";
        }else if(c == '.'){
            found_dot = true;
        }else{
            before_dot += c;
            if(found_dot)
                break;
        }
    }

    if(!found_dot || before_dot.empty() || !isalpha(before_dot[0]))
        return "No";

    int start = file_name.find('.');
    string after_dot = file_name.substr(start+1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if(find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end())
        return "No";

    return "Yes";
}