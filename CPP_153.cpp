#include <iostream>
#include <vector>
#include <string>
using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions) {
    string strongest_extension = extensions[0];
    int strongest_strength = count_if(strongest_extension.begin(), strongest_extension.end(), isupper) - count_if(strongest_extension.begin(), strongest_extension.end(), islower);
    
    for (int i = 1; i < extensions.size(); i++) {
        int current_strength = count_if(extensions[i].begin(), extensions[i].end(), isupper) - count_if(extensions[i].begin(), extensions[i].end(), islower);
        if (current_strength > strongest_strength) {
            strongest_extension = extensions[i];
            strongest_strength = current_strength;
        }
    }
    
    return class_name + "." + strongest_extension;
}

int main() {
    string class_name;
    vector<string> extensions;
    
    cin >> class_name;
    
    int num_extensions;
    cin >> num_extensions;
    
    for (int i = 0; i < num_extensions; i++) {
        string extension;
        cin >> extension;
        extensions.push_back(extension);
    }
    
    string result = Strongest_Extension(class_name, extensions);
    cout << result << endl;
    
    return 0;
}