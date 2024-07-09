bool has_digits = false;
int dot_count = 0;

for(char c : file_name){
    if(c == '.'){
        dot_count++;
        if(dot_count > 1) break;
    } else if(isdigit(c)){
        has_digits = true;
    }
}

string result = (has_digits || dot_count != 1 || file_name[0] < 'A' && file_name[0] > 'z' ||
                 (file_name.find(".txt") == string::npos &&
                  file_name.find(".exe") == string::npos &&
                  file_name.find(".dll") == string::npos)) ? "No" : "Yes";

return result;