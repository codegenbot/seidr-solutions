```cpp
#include <string>

std::string file_name_check(std::string file_name){
    int digitCount = 0;
    bool foundDot = false;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digitCount++;
        }else if(c == '.'){
            foundDot = true;
        }else if(foundDot){
            if(file_name.length() < 4) {
                return file_name.substr(i, i+file_name.substr(i).length());
            }
            std::string extension = file_name.substr(i);
            if(file_name.length() < i+extension.length()) {
                return "No";
            }
            if(extension != "txt" && extension != "exe" && extension != "dll"){
                return "No";
            }
        }
    }
    if(digitCount > 3 || !foundDot) return "No";
    if(file_name[0] < 'a' || file_name[0] > 'z' && file_name[0] < 'A' || file_name[0] > 'Z') return "No";
    return "Yes";