#include <iostream>
#include <string>
using namespace std;

string flip_case(string str) {
    for(size_t i = 0; i < str.length(); i++){
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
        else if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

int main(int argc, char *argv[]) {
    if(argc < 2) {
        cout << "Usage: ./program_name <string>" << endl;
        return 1;
    }
    
    string input_str = argv[1];
    string flipped_str = flip_case(input_str);
    cout << flipped_str << endl;
    
    return 0;
}