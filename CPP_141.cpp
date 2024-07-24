#include <string>

int file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    string before_dot;

    for(int i=0; i<file_name.size(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return 0; 
        } else if(file_name[i] == '.'){
            found_dot = true;
        } else {
            if(!found_dot) before_dot += file_name[i];
        }
    }

    if(before_dot.empty()) return 0; 
    if(found_dot && (file_name.find("txt") == string::npos &&
                     file_name.find("exe") == string::npos &&
                     file_name.find("dll") == string::npos)) 
        return 0;

    return 1;
}

int main() {
    assert(file_name_check("s.") == 0);
    // Add more test cases here...
    return 0;
}