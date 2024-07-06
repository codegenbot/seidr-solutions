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

int main() {
    string className, extensionsStr;
    cout << "Enter the class name: ";
    cin >> className;
    cout << "Enter the extensions (comma separated): ";
    getline(cin,extensionsStr);
    vector<string> extensions = split(extensionsStr,',');
    cout << "Strongest extension is: " << Strongest_Extension(className,extensions) << endl;
    return 0;
}

vector<string> split(string str,char delimiter){
    vector<string> tokens;
    string token;
    size_t pos = 0;
    while((pos = str.find(delimiter)) != std::string::npos) {
        token = str.substr(0,pos);
        str.erase(0, pos + delimiter.length());
        tokens.push_back(token);
    }
    tokens.push_back(str);
    return tokens;
}