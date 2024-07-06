#include <iostream>
#include <vector>
#include <string>
using namespace std;

int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = -1;
    string result;
    for(auto ext:extensions){
        int cap = 0, sm = 0;
        for(char c:ext){
            if(isupper(c)) cap++;
            else if(islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > strongest){
            strongest = strength;
            result = ext;
        }else if(strength == strongest) result = ext;
    }
    return class_name + "." + result;
}

int main(){
    string className, extensionsStr;
    cout << "Enter the class name: ";
    cin >> className;
    cout << "Enter the list of extensions (comma separated): ";
    getline(cin,extensionsStr);
    vector<string> extensions = split(extensionsStr,',');
    cout << "Strongest extension for " << className << " is " << Strongest_Extension(className,extensions) << endl;
    return 0;
}

vector<string> split(const string& str, char c) {
    vector<string> tokens;
    size_t start = 0, end = str.find(c);
    while (end != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
        end = str.find(c, start);
    }
    tokens.push_back(str.substr(start));
    return tokens;
}