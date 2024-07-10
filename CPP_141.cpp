#include <iostream>
#include <string>
using namespace std;

int main() {
    string file_name;
    cout << "Enter a file name: ";
    getline(cin, file_name);
    cout << "The result is: " << file_name_check(file_name) << endl;

}

string file_name_check(string file_name){
    int count = 0;
    bool foundDot = false;
    for(int i=0; i<file_name.size(); i++){
        if(isdigit(file_name[i])){
            count++;
            if(count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            foundDot = true;
        }
        else if(foundDot){
            std::string suffix = file_name.substr(i).substr(1);
            if(suffix == "txt" || suffix == "exe" || suffix == "dll") 
                return "Yes";
        }
    }
    if(count > 3 || !foundDot) return "No";
    if(file_name[0] < 'a' || (file_name[0] > 'z' && file_name[0] < 'A') || (file_name[0] > 'Z')) return "No";
    return "Yes";
}