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

    int main() {
        string class_name;
        vector<string> extensions;
        cout << "Enter the name of the class: ";
        cin >> class_name;
        cout << "Enter the list of extensions (separated by space): ";
        for(string extension; cin >> extension; ) {
            extensions.push_back(extension);
        }
        cout << Strongest_Extension(class_name, extensions) << endl;
        return 0;
    }