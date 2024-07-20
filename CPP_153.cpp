```cpp
#include <iostream>
#include <vector>
#include <string>

int main() {
    int Strongest_Extension(string class_name, vector<string> extensions) {
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

    string className, extensionsStr;
    cout << "Enter the name of the class: ";
    cin >> className;

    cout << "Enter the list of extensions (space separated): ";
    cin >> extensionsStr;

    vector<string> extensions;
    istringstream iss(extensionsStr);
    string extension;
    while(getline(iss, extension, ' ')) {
        extensions.push_back(extension);
    }

    int result = Strongest_Extension(className, extensions);

    cout << "The strongest extension is: " << result << endl;

    return 0;
}