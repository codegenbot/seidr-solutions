#include <string>

int file_name_check(std::string file_name) { 
    int digit_count = 0; 
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return 0;
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
        else if(found_dot && (i != file_name.length()-4 || file_name[i+1] == 't' && file_name[i+2] == 'x' && file_name[i+3] == 't') 
               || (file_name[i+1] == 'e' && file_name[i+2] == 'x' && file_name[i+3] == 'e')
               || (file_name[i+1] == 'd' && file_name[i+2] == 'l' && file_name[i+3] == 'l')) 
            return 0;
    }
    if(!found_dot) return 0;
    if(digit_count > 3) return 0;
    return 1;
}

int main() {
    if(file_name_check("s.") != 1) {
        std::cout << "No" << std::endl;
    }
    return 0;
}