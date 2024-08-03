```c++
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int Strongest_Extension(string class_name,vector<string> extensions){
    int max_strength = -1;
    string strongest_extension;
    
    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(int i = 0; i < extension.length(); i++){
            if(isupper(extension[i])) cap++;
            else if(islower(extension[i])) sm++;
        }
        int strength = cap - sm;
        
        if(strength > max_strength){
            max_strength = strength;
            strongest_extension = extension;
        }else if(strength == max_strength){
            if(find(extensions.begin(), extensions.end(), extension) < find(extensions.begin(), extensions.end(), strongest_extension))
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
    
    cout << "Enter the list of extensions (space separated): ";
    string temp;
    getline(cin, temp);
    size_t pos = 0;
    while ((pos = temp.find(" ")) != string::npos) {
        extensions.push_back(temp.substr(0, pos));
        temp.erase(0, pos + 1);
    }
    if (!temp.empty()) {
        extensions.push_back(temp);
    }
    
    cout << "The strongest extension for the class " << class_name << " is: " << Strongest_Extension(class_name, extensions) << endl;
    
    return 0;
}