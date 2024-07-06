using namespace std;

string filename_result file_name_check(string file_name_input) {
    bool valid = true;
    int dot_count = 0;
    int digit_count = 0;

    for(int i=0; i<file_name_input.length(); i++){
        if(file_name_input[i] == '.'){
            dot_count++;
        } else if(isdigit(file_name_input[i])){
            digit_count++;
        }
    }

    if(dot_count != 1 || digit_count > 3) {
        valid = false;
    }

    string before_dot = file_name_input.substr(0, file_name_input.find('.'));
    string after_dot = file_name_input.substr(file_name_input.find('.')+1);

    if(before_dot.empty() || !isalpha(before_dot[0])){
        valid = false;
    }

    vector<string> allowed_extensions = {"txt", "exe", "dll"};
    if(find(allowed_extensions.begin(), allowed_extensions.end(), after_dot) == allowed_extensions.end()){
        valid = false;
    }

    return valid ? "Yes" : "No";
}