#include <vector>
#include <string>

int main() {
    string class_name;
    vector<string> extensions;

    // Read input from user
    cin >> class_name;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string extension;
        cin >> extension;
        extensions.push_back(extension);
    }

    return Strongest_Extension(class_name, extensions);
}

int Strongest_Extension(string class_name,vector<string> extensions){
    int strongest = 0;
    string strongest_extension;
    for(auto extension : extensions){
        int cap = 0, sm = 0;
        for(char c : extension){
            if(isupper(c)) cap++;
            else if(islower(c)) sm++;
        }
        int strength = cap - sm;
        if(strength > strongest || (strength == strongest && extension < strongest_extension)){
            strongest = strength;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}