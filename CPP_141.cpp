#include <iostream>
#include <string>

using namespace std;

string file_name_check(string file_name){
    if (file_name.find('.') != string::npos) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    assert(file_name_check("file.txt") == "Yes");
    assert(file_name_check("myfile") == "No");

    return 0;
}