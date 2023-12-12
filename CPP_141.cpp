```
#include <iostream>
#include <string>

using namespace std;

string file_name_check(string file_name) {
    int count = 0;
    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            count++;
        }
    }
    if (count > 3) {
        return "No";
    }
    int dotIndex = file_name.find('.');
    if (dotIndex == -1 || dotIndex == 0 || dotIndex == file_name.length() - 1) {
        return "No";
    }
    string extension = file_name.substr(dotIndex + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    return "Yes";
}
```