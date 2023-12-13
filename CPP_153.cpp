```
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string input_string = "Sp";
    vector<string> extensions = {"671235", "Bb"};
    int strength = 0;
    for (int i = 0; i < input_string.length(); i++) {
        if (input_string[i] == '.') {
            string current_extension = input_string.substr(i + 1);
            strength = current_extension.length();
            if (strength > extensions.size()) {
                return current_extension;
            }
        }
    }
    return "";
}
```