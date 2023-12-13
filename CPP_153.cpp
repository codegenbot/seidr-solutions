```
#include <iostream>
#include <string>
using namespace std;

int Strongest_Extension(vector<string> extensions) {
    int strength = 0;
    string strongest_extension = "";
    for (int i = 0; i < extensions.size(); i++) {
        if (extensions[i].length() > strength) {
            strength = extensions[i].length();
            strongest_extension = extensions[i];
        }
    }
    return strongest_extension;
}

int main() {
    vector<string> extensions = {"671235", "Bb"};
    string input_string = "Sp";
    int strength = 0;
    for (int i = 0; i < input_string.length(); i++) {
        if (input_string[i] == '.') {
            string current_extension = input_string.substr(i + 1);
            strength = stoi(current_extension);
            if (strength > extensions.size()) {
                return current_extension;
            }
        }
    }
    return "";
}
```