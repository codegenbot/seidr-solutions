```
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions) {
    int max_strength = 0;
    string strongest_extension;
    for (int i = 0; i < extensions.size(); i++) {
        int strength = 0;
        for (int j = 0; j < extensions[i].length(); j++) {
            if (isupper(extensions[i][j])) {
                strength++;
            } else if (islower(extensions[i][j])) {
                strength--;
            }
        }
        if (strength > max_strength) {
            max_strength = strength;
            strongest_extension = extensions[i];
        }
    }
    return class_name + "." + strongest_extension;
}

int main() {
    string result = Strongest_Extension("Sp", {"671235", "Bb"});
    if (result == "Sp.671235") {
        cout << "The strongest extension is: " << result << endl;
    } else {
        cout << "No strongest extension found." << endl;
    }
    return 0;
}
```