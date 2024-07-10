#include <string>
#include <cassert>
#include <algorithm>

std::string file_name_check(std::string file_name) {
    if(file_name.length() < 5) {
        return "No";
    }
    
    int digitCount = 0;
    int dotCount = 0;
    int dotIndex = -1;
    
    for (int i = 0; i < file_name.length(); i++) {
        if ((file_name[i] < '0' || (file_name[i] > '9' && file_name[i] < 'A') || (file_name[i] > 'Z' && file_name[i] < 'a') || file_name[i] > 'z') && file_name[i] != '.') {
            return "No";
        } else if (file_name[i] >= '0' && file_name[i] <= '9') {
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
    std::transform(extension.begin(), extension.end(), extension.begin(), ::tolower);
    
    if (!((extension == "txt" || extension == "exe" || extension == "dll") && extension.length() == 3)) {
        return "No";
    }
    
    return "Yes";
}