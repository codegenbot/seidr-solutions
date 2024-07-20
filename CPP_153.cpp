#include <iostream>
#include <vector>
#include <string>

int main() {
    int Strongest_Extension(string class_name,vector<string> extensions){
        int strongest = -1;
        string strongest_extension;
        for(auto &extension : extensions){
            int cap = 0, sm = 0;
            for(char c : extension) {
                if(isupper(c)) cap++;
                else if(islower(c)) sm++;
            }
            int strength = cap - sm;
            if(strength > strongest) {
                strongest = strength;
                strongest_extension = extension;
            } 
        }
        return class_name + "." + strongest_extension;
    }

    string className, extensionsString;
    cout << "Enter the name of the class: ";
    cin >> className;
    cout << "Enter the list of extensions (comma separated): ";
    getline(cin, extensionsString);
    vector<string> extensions = split(extensionsString, ',');
    
    int result = Strongest_Extension(className, extensions);

    cout << "The strongest extension is: " << result << endl;

    return 0;
}

string split(const string& str, char sep) {
    size_t pos = 0, prev = 0;
    vector<string> tokens;
    while ((pos = str.find(sep, prev)) != string::npos) {
        tokens.push_back(str.substr(prev, pos - prev));
        prev = pos + 1;
    }
    tokens.push_back(str.substr(prev));
    return tokens[0];
}