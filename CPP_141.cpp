#include <string>
#include <cassert>

std::string file_name_check(std::string file_name) {
    int digitCount = 0;
    int dotCount = 0;
    int dotIndex = -1;
    
    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            digitCount++;
        } else if (file_name[i] == '.') {
            dotCount++;
            dotIndex = i;
        }
    }
    
    if (digitCount > 3 || dotCount != 1 || dotIndex == -1 || dotIndex == file_name.length() - 1 || dotIndex == 0) {
        return "No";
    }
    
    std::string extension = file_name.substr(dotIndex + 1);
    if (extension != ".txt" && extension != ".exe" && extension != ".dll") {
        return "No";
    }
    
    return "Yes";
}