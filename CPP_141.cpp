```cpp
#include <string>
#include <cassert>
using namespace std;

bool file_name_check(string file_name) {
    bool valid = true;
    int dot_count = 0;
    int digit_count = 0;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        } else if(isdigit(file_name[i])){
            digit_count++;
        }
    }

    if(dot_count != 1 || digit_count > 3) {
        valid = false;
    }

    string before_dot = file_name.substr(0, file_name.find('.'));
    string after_dot = file_name.substr(file_name.find('.')+1);

    if(before_dot.empty() || !isalpha(before_dot[0])){
        valid = false;
    }

    vector<string> allowed_extensions = {"txt", "exe", "dll"};
    if(find(allowed_extensions.begin(), allowed_extensions.end(), after_dot) == allowed_extensions.end()){
        valid = false;
    }

    return valid;
}

int main() {
    assert(file_name_check("s.") == false);
    return 0;
}