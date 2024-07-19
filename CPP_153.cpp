#include <vector>
#include <string>
#include <iostream>
#include <initializer_list>
using namespace std;

std::string Strongest_Extension(const string& class_name, const vector<string>& extensions) {
    for (const auto& extension : extensions) {
        if (!extension.empty()) {
            return class_name + "." + extension;
        }
    }
    return class_name;
}

int main() {
    string className; 
    vector<string> extensions;
    
    cin >> className >> extensions.size();
    for (size_t i = 0; i < extensions.size(); ++i) {
        cin >> extensions[i];
    }
    
    cout << Strongest_Extension(className, extensions) << endl;
    
    return 0;
}