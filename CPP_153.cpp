```
#include <vector>
#include <string>
#include <iostream>
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
    cout << Strongest_Extension("My", {"Java", "Python", "C++"}) << endl; 
    return 0; 
}