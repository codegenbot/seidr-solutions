```cpp
#include <iostream>
#include <string>

std::string file_name_check(std::string file_name){
    int count = 0;
    bool foundDot = false;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9')
            count++;
        else if(file_name[i] == '.'){
            foundDot = true;
        }
        else if(i > 0 && (file_name[i] < 'a' || file_name[i] > 'z') && (file_name[i] < 'A' || file_name[i] > 'Z')){
            return "No";
        }
    }
    if(count > 3 || !foundDot)
        return "No";
    std::string extension = file_name.substr(file_name.find('.')+1);
    if(extension != "txt" && extension != "exe" && extension != "dll")
        return "No";
    return "Yes";
}

int main() {
    std::string file_name;
    std::cout << "Enter the file name: ";
    std::getline(std::cin, file_name);
    std::cout << file_name_check(file_name) << std::endl;
    return 0;
}